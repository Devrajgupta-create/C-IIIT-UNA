#include<stdio.h>
#include<math.h>;
int add(int x,int y){
    return x+y;
}
int power(int x,int y){
    int pwr;
    pwr=pow(x,y);
    return pwr;
}

int main(){
    int a,b,c,d,sum;
    printf("ENTER 1ST NUMBER:");
    scanf("%d",&a);
    printf("ENTER 2ST NUMBER:");
    scanf("%d",&b);
    add(a,b);
    sum=add(a,b);
    printf("sum of two numbers is:%d\n",sum);
    printf("ENTER 1ST NUMBER");
    scanf("%d",&c);
    printf("ENTER 2ST NUMBER");
    scanf("%d",&d);
    power(c,d);
    int powerr=power(c,d);
    printf("power of two numbers is:%d\n",powerr);;
    return 0;

}



