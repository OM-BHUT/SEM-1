#include<stdio.h>
void main(){
    int n;
    printf("enter no:");
    scanf("%d",&n);
    if((n%5==0 || n%3==0)&&n!=0){
        printf("no is divisible by 3 or 5 but not by 15");
    }
    else{
        printf("false");
    }
}