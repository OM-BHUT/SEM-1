#include<stdio.h>
void main(){
	int a=0,b=1,c,n,i;
	printf("enter:");
	scanf("%d",&n);
		printf("0\n");
	for(i=2;i<=n;i++){
	
		c = a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
	

}
