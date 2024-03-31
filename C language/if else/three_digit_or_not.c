#include<stdio.h>
void main(){
    int n;
    printf("enter no.");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("3 digit no.");
    }
    else{
        printf("not 3 digit");
    }
}
