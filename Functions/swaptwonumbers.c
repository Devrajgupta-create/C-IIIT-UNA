#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter 1st number:");
    scanf("%d",&a);
    printf("enter 1st number:");
    scanf("%d",&b);
    printf("both number before swap; %d,%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("both number after swap; %d,%d",a,b);
    return 0;
}