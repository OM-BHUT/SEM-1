#include<stdio.h>
void main(){
    int n;
    printf("enter no:");
    scanf("%d",&n);
    n%2==0 ? printf("even no.") : printf("odd no.");
}