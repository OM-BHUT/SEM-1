#include<stdio.h>
void main()
{
	int a,b,c;
	float d;
	printf("for average of three numbers\n");
	printf("enter an integer val:");
	scanf("%d",&a);
	printf("enter an integer val:");
	scanf("%d",&b);
	printf("enter an integer val:");
	scanf("%d",&c);
	d=(a+b+c)/3.0;
	printf("average =%f",d);
}
