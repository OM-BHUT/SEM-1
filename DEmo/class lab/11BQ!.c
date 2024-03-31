#include<stdio.h>
void main()
{
    int i,n,a=1,b=1,sum=1;
    printf("enter val:");
    scanf("%d",&n);
    
    for(i = 1;i <= (n - 2);i++){
        sum = a+b;
        a = b;
        b = sum;
    }
    printf("\n%d",sum);
}
