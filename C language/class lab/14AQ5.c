#include<stdio.h>
void main(){
    int i,n;
    printf("enter val:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter arr[%d]",i);
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<n;i++){
        if(arr[i]<35){
            printf("%d ",i);
        }
    }
}