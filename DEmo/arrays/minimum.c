#include<stdio.h>
void main(){
    int n;
    printf("enter:");
    scanf("%d",&n);
    int arr[n],i,min=arr[0];
    for(i=1;i<n;i++){
        printf("enter arr[%d]",i);
        scanf("%d",&arr[i]);
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d",min);
}