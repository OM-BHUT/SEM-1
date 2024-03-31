#include<stdio.h>
void main(){
    int a;
    printf("enter no:");
    scanf("%d",&a);
    if (a<=0){
        printf("number = %d",a=a*-1);
    }
    printf("the absolute value = %d",a);
}