#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        arr[i]=pow(i+1,2);
        printf("%d\n",arr[i]);
    }
}