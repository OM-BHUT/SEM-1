#include<stdio.h>
void reverse(int arr[],int si,int ei){
    int i,j;
    for(i=si,j=ei;i<j;i++,j--){
     int temp = arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
    }
    return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n = 7;
    int k = 3,i;
    k = k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(i=0;i<=6;i++){
        printf("\n%d",arr[i]);
    }
}