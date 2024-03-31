#include<stdio.h>
void main(){
	int n,sum,ld;
	printf("enter val:");
	scanf("%d",&n);
	
	ld = n%10;
	while(n>=10){
		n = n/10;
	}
	sum = ld+n;
	printf("%d",sum);
}
