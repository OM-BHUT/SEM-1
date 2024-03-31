#include<stdio.h>
void main(){
    int n,i;
    printf("enter value:");
    scanf("%d",&n);
    for(int i;i<=(n*10);i=n+n){
        printf("\n%d",i);
    }
}
