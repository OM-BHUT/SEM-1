//har har mahadev
#include<stdio.h>
void add(int,int);
void main(){
	int a,b;
	printf("enter:");
	scanf("%d",&a);
	printf("enter:");
	scanf("%d",&b);
	add(a,b);
}

void add(int a,int b){
	if(a>b){
		printf("max = %d",a);
	
	}
	else{
		printf("max = %d",b);
	}
}
