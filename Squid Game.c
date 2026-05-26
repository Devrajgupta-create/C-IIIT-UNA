#include <Servo.h>

// Pin definitions
const int trigPin = 9;
const int echoPin = 10;
const int pirPin = 11;
const int ledPin = 6;
const int buzzerPin = 2;

Servo myServo;

// Variables
long duration;
int distance;
unsigned long lastNoMotionTime = 0;
bool motionDetected = false;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  myServo.attach(3);
  myServo.write(0);

  Serial.begin(9600);
}

void loop() {
  // ---- Ultrasonic Distance Measurement ----
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH, 30000); // timeout added
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // ---- Check if object within 2m (200 cm recommended) ----
  if (distance > 0 && distance <= 200) {

    int pirState = digitalRead(pirPin);

    if (pirState == HIGH) {
      // Human detected
      digitalWrite(ledPin, HIGH);
      digitalWrite(buzzerPin, HIGH);

      motionDetected = true;
      lastNoMotionTime = millis();

      Serial.println("Human detected!");
    } 
    else {
      // No human detected
      digitalWrite(ledPin, LOW);
      digitalWrite(buzzerPin, LOW);

      if (motionDetected == true) {
        lastNoMotionTime = millis();
        motionDetected = false;
      }

      // Wait 5 seconds before rotating servo0 motor
      if (millis() - lastNoMotionTime >= 5000) {
        Serial.println("No human, rotating servo");

        myServo.write(180);
        delay(800);   // reduced delay
        myServo.write(0);

        lastNoMotionTime = millis();
      }
    }

  } else {
    // No object nearby
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }

  delay(200); // reduced delay for faster response
}
