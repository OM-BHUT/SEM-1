#include<stdio.h>
void main(){
	int n,i,j,k,nst,nsp;
	printf("enter:");
	scanf("%d",&n);
	nst=1;
	nsp=n-1;
	for(i=1;i<=n;i++){
		for(k=1;k<=nsp;k++){
			printf(" ");
		}
		nsp = nsp-1;
		for(j=1;j<=nst;j++){
			printf("%d ",j);
		}
		nst=nst+2;
		printf("\n");
	}
}
