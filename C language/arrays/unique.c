#include<stdio.h>
#include<stdbool.h>
void main(){
    int n;
    printf("enter:");
    scanf("%d",&n);
    int i,arr[n];
   
    for(i=0;i<=n-1;i++){
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }//arr[4]={1,2,3,4}  
    int j;
    for(i=0;i<n;i++){
        bool flag = false;
        for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            flag = true;
            
        }
        }
        if(flag == false){
            printf("\n%d is unique",arr[i]);
            break;
        }
        
    }
}