#include<stdio.h>
void main(){
    int n,count;
    printf("enter val:");
    scanf("%d",&n);
    count = 0;
    while(n != 0){
        n = n/10;
        count++;
    }
    printf("%d",count);
}