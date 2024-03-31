#include<stdio.h>
void main(){
	int n,i,j,k;
	printf("enter:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=i;k++){
			printf(" ");
		}
		for(j=1;j<=n;j++){
			printf("* ");
		}
		printf("\n");
	}
}
