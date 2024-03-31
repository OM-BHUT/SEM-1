#include<stdio.h>
void main()
{
	float p,r,t,s;
	printf("find simple interest");
	printf("\nenter principle:");
	scanf("%f",&p);
	printf("enter rate:");
	scanf("%f",&r);
	printf("enter time:");
	scanf("%f",&t);
	s=(p*r*t)/100;
	printf("simple interest=%f",s);
	
}
