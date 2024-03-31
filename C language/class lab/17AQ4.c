#include<stdio.h>
void main(){
	 int a,b,temp;
	 printf("enter:");
	 scanf("%d",&a);
	 printf("enter:");
	 scanf("%d",&b);
	 int *ptr1,*ptr2,*ptr3;
	 temp = a;
	 ptr1 = &temp;
	 a=b;
	 ptr2 = &a;
	 b = temp;
	 ptr3 = &b;
	 printf("a=%d b=%d",*ptr2,*ptr3);
}

