#include<stdio.h>
void main(){
	int n,i,j,k;
	printf("enter:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=n-1;k++){
			printf(" ");
		}
		
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		
		printf("\n");
	}
}
