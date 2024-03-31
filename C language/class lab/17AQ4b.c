#include<stdio.h>
void main(){
	 int a,b,temp;
	 printf("enter:");
	 scanf("%d",&a);
	 printf("enter:");
	 scanf("%d",&b);
	 int *ptr1=&temp,*ptr2=&a,*ptr3=&b;
	 temp = a;	 
	 a=b;	 
	 b = temp;	 
	 printf("a=%d b=%d",*ptr2,*ptr3);
}

