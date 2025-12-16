#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,22,33,44,67,68,78,89};
    int n;
    printf("enter number to search:");
    scanf("%d",n);
    int b=sizeof(a)/4;
    for (int i=0;i<=b;i++){
        if(a[i]==n){
            printf("Yes and at %d position.",i+1);
        }
        else{
            printf("Not in array");
        }
    }
    return 0;
}