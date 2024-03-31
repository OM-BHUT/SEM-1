#include<stdio.h>
void swap(int*,int*);
void main(){
	 int a,b;
	 printf("enter:");
	 scanf("%d",&a);
	 printf("enter:");
	 scanf("%d",&b);
	 printf("before = %d %d\n",a,b);	 
	 swap(&a,&b);
	 printf("after = %d %d",a,b);
}
void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}

