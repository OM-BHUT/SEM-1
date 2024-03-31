#include<stdio.h>
void main()
{
    int n;
    printf("enter val:");
    scanf("%d",&n);
    int sum = 0;
    if(n % 2 == 0){
            n = -n/2;
            
        }
        else{
            n = (-n/2)+n;
        }
        printf("%d",n);
    
}