#include<stdio.h>
void main(){
	int n,i;
	float avg = 0,sum = 0;
	printf("enter:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		sum = sum+arr[i];
		avg = sum/n;
	}
	printf("sum = %f",sum);
	printf("\naverage = %f",avg);
	int min,max;
	min=max = arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
		if(arr[i]<min){
			min = arr[i];
		}
		
	}
	printf("\nmax = %d",max);
	printf("\nmin = %d",min);
}
