#include<stdio.h>
void reverse(int arr[],int n);
void main(){
    int n;
    printf("enter:");
    scanf("%d",&n);
    int i,arr[n],count=0;
    for(i=0;i<n;i++){
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
}
void reverse(int arr[],int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
        i++;
        j--;
    }
    
    if(arr[i]==arr[j]){
            printf("\nnumber is palindrome");
        }
    
    else{
        printf("not palindrome");
       
}
}