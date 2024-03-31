#include<stdio.h>
#include<limits.h>            
void main(){
    int n;
    printf("enter:");
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++){
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }//arr[5]={1,2,3,4,5}
    int max=INT_MIN,smax=INT_MIN;
    for(i=0;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
    printf("max = %d\nsecond max=%d",max,smax);
}