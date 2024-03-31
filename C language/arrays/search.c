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
    int x,idx=-1;
    bool flag = false;
    printf("check the number x:");
    scanf("%d",&x);
    for(i=0;i<=n-1;i++){
      if(arr[i]==x){
        flag = true;
        idx = i;
      }
    }
    if(flag == true){
        printf("%d is present at arr[%d]",x,idx);
    }
    else{
        printf("%d is not present",x);
    }
}