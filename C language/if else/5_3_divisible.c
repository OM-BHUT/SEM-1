#include<stdio.h>
void main(){
	int n;
	printf("enter no:");
	scanf("%d",&n);
	if(n%5==0 && n%3==0){
		printf("right");
	}
	else{
		printf("wrong");
	}
}
