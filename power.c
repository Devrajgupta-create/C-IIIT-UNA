#include<stdio.h>
// int powerr(int a,int b,int power){
//     if (b==0){
//         printf("a to the power b is:%d",power);
//         return 0;
//     }
//     powerr(a,b-1,power*=a);
//     return 0;
// }
int lpower(int a,int b){
    if(b==0) return 1;
    if(b%2==0){
        
        return lpower(a,b/2)*lpower(a,b/2);
      
    }
    else{
        
        return lpower(a,b/2)*lpower(a,b/2)*a;
      
    }
}

int main(){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
//    powerr(a,b,power);
   printf("%d", lpower(a,b));
}