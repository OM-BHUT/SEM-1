#include<stdio.h>
void main(){
    int i,n;
    printf("enter:");
    scanf("%d",&n);
    int product=1,arr[n];
    for(i=0;i<n;i++){
        printf("enter arr[%d]",i);
        scanf("%d",&arr[i]);
        product = product*arr[i];
    }
    printf("product = %d",product);
}