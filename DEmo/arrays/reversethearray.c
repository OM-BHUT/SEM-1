#include<stdio.h>
void reverse(int arr[],int n);
void main(){
    int n;
    printf("enter:");
    scanf("%d",&n);
    int i,arr[n],brr[n],temp;
    for(i=0;i<n;i++){
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }//arr[4]={1,2,3,4}    
    reverse(arr,n);
    for(i=0;i<n;i++){
        printf("\n%d",arr[i]);
    }
    
}
    void reverse(int arr[],int n){
     int i=0;
     int j=n-1;
     while(i<j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
     }

    }