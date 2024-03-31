#include<stdio.h>
void main(){
	int n,i,even=0,odd=0;
	printf("enter:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if (arr[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
		
	}
	printf("even = %d",even);
	printf("\nodd = %d",odd);
}
