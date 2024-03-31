#include<stdio.h>
void main(){
	int n,i=1,a=0;
	printf("enter:");
	scanf("%d",&n);
	while(i<=n){
		if(n % i == 0){
		a++;
		}
		i++;
	}
	if(a==2){
		printf(" prime");
	}
	else{
		printf("not prime");
	}
		
	}

