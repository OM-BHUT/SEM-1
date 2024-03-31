#include<stdio.h>
int array(int arr[5]);
int main(){
	
	int arr[5],i;
	for(i=0;i<5;i++){
		printf("enter arr[%d]",i);
		scanf("%d",&arr[i]);
		
	}	
    array(arr);
}
int array(int arr[5]){
	int i,n;
	for(i=0;i<5;i++){
		printf("\nelemnt[%d] is %d",i,arr[i]);
	}
}
