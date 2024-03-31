#include<stdio.h>
void main(){
	int n,i,p=0,neg=0;
	printf("enter:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter arr[%d]:",i);
		scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++){
			if(arr[i]>0){
		 p++;
			}
			
			else{
			neg++;
			}
		}
	
	printf("positive = %d",p);
	printf("\nnegative =%d",neg);
}
