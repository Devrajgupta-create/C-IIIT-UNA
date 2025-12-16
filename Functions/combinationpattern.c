#include <stdio.h>
int factorial(int a){
    int i,fact;
    fact=1;
    for(i=a;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}
int com(int n,int r){
    int combination=factorial(n)/(factorial(r)*factorial(n-r));
    return combination;
}

int main(){
    int i,j,d;
    printf("enter n:");
    scanf("%d",&d);
    for(i=0;i<=d;i++){
        for(j=0;j<=i;j++){
            printf(" %d ",com(i,j));
        }
        printf("\n");
    }
    return 0;
}