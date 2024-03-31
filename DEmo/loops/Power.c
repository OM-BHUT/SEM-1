#include<stdio.h>
 
void main()
{
    int i,a,b,power=1;
    printf("enter val:");
    scanf("%d %d",&a,&b);
    for(i = 1;i <= b;i++){
        power = power * a;
    }
    printf("%d",power);
    
}