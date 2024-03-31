#include<stdio.h>
void main(){
    int n;
    printf("enter no:");
    scanf("%d",&n);
    if(n%3==0 || n%5==0){
        printf("true");
    }
    else{
        printf("false");
    }
}