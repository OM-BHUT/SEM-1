#include<stdio.h>
void main(){
	int n,digit=0;
	
	while(n != 0){
		printf("ENTER:");
		scanf("%d",&n);
		n = n/10;
		printf("%d",n);
	}
}
