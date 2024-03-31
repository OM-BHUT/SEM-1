#include<stdio.h>
void main(){
    int n,x;
    printf("enter:");
    scanf("%d",&n);
    int i,arr[n],count=0;
    for(i=0;i<n;i++){
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("\n enter value of x:");
    scanf("%d",&x);
   
    for(i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
    }
    printf("%d",count);
}