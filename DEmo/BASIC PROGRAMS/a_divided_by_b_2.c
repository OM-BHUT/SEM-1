#include<stdio.h>
void main(){
    int a,b,r,q;
    printf("a>b\n");
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    q = a/b;
    r=a-(b*q);
    printf("answer=%d",r);

    
}