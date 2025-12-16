#include <stdio.h>
int prime(int n){
    int i,j;
    for(i=2;i<n;i++){
    
        if(n%i==0){
            int b=1;
            for(j=2;j<i;j++){
        
                if(i%j==0){
                b=0;
                break;
                }
            }
        if(b==1){
            int m=n;
            while(m>=i){
                if(m%i==0)
                printf("%d\n",i);
                m=m/i;
            }
        }
        
            
        }
    }
}

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    prime(n);

}
