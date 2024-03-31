#include<stdio.h>
void main(){
    int n;
    printf("enter:");
    scanf("%d",&n);
    int i,arr[n],sum = 0,sum2 = n*(n+1)/2;
    for(i=0;i<=n-2;i++){
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }//arr[4]={1,2,3,4}  
    for(i=0;i<=n-2;i++){
        sum = sum+arr[i];
    }
    printf("%d is missing in array",sum2-sum);
}