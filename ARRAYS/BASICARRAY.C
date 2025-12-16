#include<stdio.h>
int array(int x[]){

}

int main(){
    int arr[4]={9,3,1,8};//declaration and initialization  
    int sum=0;
    int n=sizeof(arr)/4;//sizeof function-1 element store 4 bytes of storage
    for(int i=0;i<=n;i++){
        printf("%d\n",arr[i]);
        sum += arr[i];
    }
    printf("sum of all elements:%d\n",sum);
    int max=arr[0];
    for(int j=1;j<=n;j++){
        max=(arr[j]>max)?arr[j]:max;
    }
    printf("Max element of array:%d",max);

    return 0;
}

