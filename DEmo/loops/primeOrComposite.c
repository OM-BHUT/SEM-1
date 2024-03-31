#include<stdio.h>
void main(){
    int n;
    printf("enter val:");
    scanf("%d",&n);
    int a = 0;
    for(int i = 2;i <= (n-1);i++){
        if(n%i == 0){
            a = 1;
            
            break;
        }
    }
    if (n == 1)    printf("nor prime nor composite");
    if (n == 2)    printf("nor prime nor composite");
    if (a == 0)    printf(" prime");
    else           printf("composite");
}