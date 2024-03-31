#include<stdio.h>
void main(){
	 int a;
	 int *ptr1;
	 a=50;
	 ptr1=&a;
	 printf("%d %d",a,ptr1);
     float b;
	 float *ptr2;
	 b=40;
	 ptr2=&b;
	 printf("\n%f %d",b,ptr2);
	 double c;
	 double *ptr3;
	 c=30;
	 ptr3=&c;
	 printf("\n%lf %d",c,ptr3);
	 char d;
	 int *ptr4;
	 d='A';
	 ptr4=&d;
	 printf("\n%c %d",d,ptr4);
}

