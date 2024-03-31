#include<stdio.h>
void main(){
	int n,count=0,ld;
	printf("ENTER VAL:");
	scanf("%d",&n);
	while (n != 0){
		ld = n%10;
		count = count*10;
		count = (count+(ld*10));
		n = n/10;
	}
	n = n/10;
	
	printf("%d",count);
	
	
}
