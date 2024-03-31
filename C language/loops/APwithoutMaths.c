#include<stdio.h>
void main(){
    int n,a;
    printf("enter value:");
    scanf("%d",&n);
    a=4;
    for(int i=1;i<=n;i++){
        printf("\n%d",a);
        a=a+3;
    }
}