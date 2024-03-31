#include<stdio.h>
void main(){
    int n,i;
    printf("enter val:");
    scanf("%d",&n);
    float a=100;
    for(i=1;i<=n;i++){
        printf("\n%f",a);
        a = a*(1.0/2);
    }
}