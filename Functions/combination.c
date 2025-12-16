#include<stdio.h>
int fac(int a){
    int i,fact;
    fact=1;
    for(i=a;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,r,com;
    printf("enter n of ncr:");
    scanf("%d",&n);
    printf("enter r of ncr:");
    scanf("%d",&r);
    com=fac(n)/(fac(r)*fac(n-r));
    printf("ncr is:%d",com);
    return 0;
}