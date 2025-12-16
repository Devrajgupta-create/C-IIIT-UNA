#include<stdio.h>
//swaping with pointer
void swap(int* x,int* y){
    int temp;
    temp= *x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a,b;
    printf("enter 1st number:",a);
    scanf("%d",&a);           
    printf("enter 2st number:",b);
    scanf("%d",&b);           
    int* x=&a;
    int* y=&b;
//how to use pointer and its format specifiers
    printf("%d\n",a);
    printf("%d\n",x);  //wrong
    printf("%p\n",x);
    printf("%p\n",*x); //wrong   
    printf("%d\n",*x);   

    swap(x,y);
    printf("numbers after swap : %d %d",a,b);
}

