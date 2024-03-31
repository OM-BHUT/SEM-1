#include<stdio.h>
void main()
{
	float a,b;
	printf("swap two numbers:");
	printf("\nenter no:");
	scanf("%f",&a);
	printf("enter no:");
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swap %f",a);
	printf("swap %f",b);
}
