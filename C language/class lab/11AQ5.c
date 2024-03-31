#include<stdio.h>
void main()
{
    int n,i,product=1;
    printf("enter val:");
    scanf("%d",&n);
    for(i = 1;i<=n;i++){
    product = product * i;
     
    }
    printf("%d",product);
}

   
