#include<stdio.h>
int counting(int n){
    if(n==0) return 0;
    printf("%d\n",n);
    counting(n-1);//recursive call
    printf("%d\n",n);
    return 0;
}
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    counting(a);
}
