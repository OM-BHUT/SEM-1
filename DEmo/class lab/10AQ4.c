#include<stdio.h>
void main(){
	int n,count;
	printf("ENTER VAL:");
	scanf("%d",&n);
	while (n != 0){
		n = n/10;
		count++;
	}
	printf("%d",count);
}
