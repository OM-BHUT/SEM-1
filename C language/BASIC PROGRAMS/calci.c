#include<stdio.h>
void main()
{
	float a,b;
	char c;
	printf("enter integer:");
	scanf("%f",&a);
	printf("\nenter integer:");
	scanf("%f",&b);
	printf("ENTER +,-,/,*:");
	scanf(" %c",&c);
	if(c=='+'){
		printf("%f",c=a+b);
	}
	else if(c=='-'){
		printf("%f",c=a-b);
	}
	else if (c=='*'){
		printf("%f",c=a*b);
	}
	else if (c=='/'){
	    printf("%f",c=a/b);	
	    
	}
	else{
		printf("invalid");
	}
	
	
	
	                                                                                                                                                     
}
