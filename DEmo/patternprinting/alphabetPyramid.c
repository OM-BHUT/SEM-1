#include<stdio.h>
void main(){
	int n,i,j,k,nst,nsp,d,a;
	printf("enter:");
	scanf("%d",&n);
	nst=1;
	nsp=n-1;
	a=1;
	for(i=1;i<=n;i++){
		for(k=1;k<=nsp;k++){
			printf(" ");
		}
		nsp = nsp-1;
		for(j=1;j<=nst;j++){
			d=a+64;
			char ch = (char)d;
			printf("%c ",ch);
			a++;
		}
		nst=nst+2;
		printf("\n");
	}
}
