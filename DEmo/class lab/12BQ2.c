#include<stdio.h>
void main()
{
    float n,i,j,product=1,sum=1.0,e=1;
    printf("enter val:");
    scanf("%f",&n);
    for(i = 1;i<=n;i++){
    product = product * i;
    for(j=1;j<=i;j++){
    	sum = 1.0/product;
    	e+=sum;
	}
		
    }
    
    printf("%f",e);
}

