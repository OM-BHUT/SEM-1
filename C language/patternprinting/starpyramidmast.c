#include<stdio.h>
void main(){
	int n,i,j,k,l,h;
	printf("enter:");
	scanf("%d",&n);
	int nsp = 1;
	int nst = n;
	for(h=1;h<=2*n+1;h++){
		printf("*");
	}
	printf("\n");
	for(i=1;i<=n;i++){
	
	for(j=1;j<=nst;j++){
		printf("*");
	}
	for(k=1;k<=nsp;k++){
		printf(" ");
	}
	for(l=1;l<=nst;l++){
		printf("*");
	}
	nst--;
	nsp +=2;
	printf("\n");
}
}
