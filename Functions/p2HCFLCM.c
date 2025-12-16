#include<stdio.h>
int main(){
    int a,b,min,max,hcf,lcm;
    printf("enter 2 numbers:");
    scanf("%d%d",&a,&b);
//HCF
    min=(a<b)?a:b;
    int i;
    for(i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    printf("HCF:%d\n",hcf);
//LCM
    int j;
    max=(a>b)?a:b;
    int prod=a*b;
    if(max/min==0){
        lcm=max;
    }else{
        for(j=max;j<=prod;j++){
            if(j%a==0 && j%b==0){
            lcm=j;   
            }
        }
    }
    printf("LCM:%d",lcm);

}

//ALSO HCF*LCM=A*B (FOR 2 NUMBERS)
