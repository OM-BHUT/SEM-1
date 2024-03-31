#include<stdio.h>
void main(){
	int n,m,i,j;
	printf("enter:");
	scanf("%d",&n);
	printf("enter:");
	scanf("%d",&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(i==1 || j==1 || i==n || j==m){
				printf("*");
			}
			else{
			printf(" ");
			}
		}
		printf("\n");
	}
}
