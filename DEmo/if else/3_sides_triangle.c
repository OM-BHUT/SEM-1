#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter no:");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
        printf("true");
    }
    else{
        printf("false");
        }
}
