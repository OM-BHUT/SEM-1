#include<stdio.h>
void main(){
	int n,i,j,k,a,d;
	printf("enter:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=1;
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
		 d = a+64;
		 char ch = (char)d;
		 printf("%c",ch);
		 a++;
		}
		
		printf("\n");
	}
}
