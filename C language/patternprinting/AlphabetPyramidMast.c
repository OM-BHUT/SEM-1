#include<stdio.h>
void main(){
	int n,i,j,k,q,a,nsp,nst;
	printf("enter:");
	scanf("%d",&n);
	nst = 1;
	nsp = n-1;
	for(i=1;i<=n;i++){
	
		for(q=1;q<=nsp;q++){
			printf(" ");
		}
		nsp--;
		for(j=1;j<=i;j++){
			char ch = (char)(j+64);
			printf("%c ",ch);
		}
		a=i-1;
		for(k=1;k<=i-1;k++){
			char ch = (char)(a+64);
			printf("%c ",ch);
			a--;
		}
		printf("\n");
	}
	
}
