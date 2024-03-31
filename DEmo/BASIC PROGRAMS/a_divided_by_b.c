#include<stdio.h>
void main(){
    int a,b,c;
    printf("a>b");
    printf("\nenter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    c=a%b;
    printf("answer = %d",c);
}