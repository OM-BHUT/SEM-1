#include<stdio.h>
 
void main()
{
    int i,a=2,b,power=1;
    printf("enter val:");
    scanf("%d",&b);
    for(i = 1;i <= b;i++){
        power = power * a;
        printf("%d",power);
    }
    
    
}