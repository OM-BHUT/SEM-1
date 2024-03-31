#include<stdio.h>
void main(){
	 int a,b,c;
	 printf("enter:");
	 scanf("%d",&a);
	 printf("enter:");
	 scanf("%d",&b);
	 int *ptr1,*ptr2,*ptr3;
	 ptr1 = &a;
	 ptr2 = &b;
	 c = a+b;
	 ptr3 = &c;
	 printf("%d",*ptr3);
	 
}

