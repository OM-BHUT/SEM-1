#include<stdio.h>
void main(){
	int n,avg,count = 0,sum =0;
	
	while(1){
		printf("enter val:");
	scanf("%d",&n);
	if(n==0){
		break;
	}
		sum = sum+n;
		
	 	count++;
	 	
	}
	avg=sum/count;
	printf("%d\n",sum);
	printf("%d",avg);
}
