#include<stdio.h>
int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}

int main(){
    int a,fact;
    printf("enter a number:");
    scanf("%d",&a);
    fact=factorial(a);
    printf("%d",fact);
}