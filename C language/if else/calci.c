#include<stdio.h>
void main()
{
	int a,b;
	char m;
	printf("mini calci");
	printf("\nenter any value:");
	scanf("%d",&a);
	printf("\nenter any value:");
	scanf("%d",&b);
	printf("enter +,-,/,*:");
	scanf(" %c",&m);
	if (m=='+'){
		printf("%d",m=a+b);
	}
	else if(m=='-'){
		printf("%d",m=a-b);	
	}
	else if(m=='*'){
		printf("%d",m=a*b);	
	}
	else if(m=='/')
	{
		printf("%d",m=a/b);	
	}
	else{
		printf("invalid");
	}
}
