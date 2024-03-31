#include<stdio.h>
void main()
{
	int feet,inches;
	printf("feet to inches:");
	printf("enter the value of feet:");
	scanf("%d",&feet);
	if (feet>=0){
		inches = feet*12;
		printf("inches = %d",inches);
		
	}
	else{
		printf("given number is not valid");
	}
}
