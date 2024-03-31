#include<stdio.h>
void main(){
    int n,a;
    printf("enter val:");
    scanf("%d",&n);
    a=3;
    for(int i=a;i<=n;i++){
        printf("\n%d",a);
        a=a*2;
    }
}