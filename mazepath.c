#include<stdio.h>
int maze(int sr,int sc,int er,int ec){
    int rightways=0;
    int downways=0;
    if(sr==er && sc==ec) return 1;
    if(sr==er){
        rightways += maze(sr,sc+1,er,ec);
        }
    if(sc==ec){
        downways += maze(sr+1,sc,er,ec);
        }
    else{
        rightways += maze(sr,sc+1,er,ec);
        downways += maze(sr+1,sc,er,ec);
    }
    
    int totalways=rightways+downways;
    printf("total ways:%d",totalways);
}

int main(){
    int r,c;
    printf("enter r:");
    scanf("%d",&r);
    printf("enter c:");
    scanf("%d",&c);
    maze(1,1,r,c);
}