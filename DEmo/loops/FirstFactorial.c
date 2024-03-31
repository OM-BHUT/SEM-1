#include<stdio.h>
void main()
{
    int n,product=1;
    printf("enter val:");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
    product = product * i;
    printf("the factorial of %d is %d\n",i,product);
     
    }
    
}

   