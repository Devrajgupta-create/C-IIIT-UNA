#include<stdio.h>
void counting(int n,int sum){
    if(n==0){
        printf("sum:%d",sum);
        return;
    }
    sum +=n;
    counting(n-1,sum);//recursive call
    return;
}
//1st method 

//int main(){
//    int a;
//    int sum=0;
//    printf("enter a number:");
//    scanf("%d",&a);
//    counting(a,sum);
//
//}

//2nd method
int add(int n){
    if(n==0) return 0;
    return n+add(n-1);
}
int main(){
    int a;
    int sum=0;
    printf("enter a number:");
    scanf("%d",&a);
    int addition=add(a);
    printf("sum:%d",addition);
}
