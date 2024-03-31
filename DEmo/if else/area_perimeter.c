#include<stdio.h>
void main(){
	int l,b;
	printf("enter length:");
	scanf("%d",&l);
	printf("enter bredth:");
	scanf("%d",&b);
	int a = l*b;
	int p = 2*(l+b);
	if(a>p){
		printf("area = %d",a);
	}
	else{
		printf("perimeter = %d",p);
	}
}
