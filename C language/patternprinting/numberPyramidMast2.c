#include<stdio.h>
void main(){
	int n,i,j,k,l,h;
	printf("enter:");
	scanf("%d",&n);
	int nsp = 1;
	int nst = n;
	for(h=1;h<=2*n-1;h++){
		printf("%d",h);
	}
	printf("\n");
	for(i=1;i<=n;i++){
	
	for(j=1;j<=nst;j++){
		printf("%d",j);
	}
	for(k=1;k<=nsp;k++){
		printf(" ");
	}
	for(l=1;l<=nst;l++){
		printf("%d",l);
	}
	nst--;
	nsp +=2;
	printf("\n");
}
}
