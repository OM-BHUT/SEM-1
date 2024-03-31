#include<stdio.h>
void main(){
    int n;
    printf("enter:");
    scanf("%d",&n);
    int i,arr[n],brr[n];
    for(i=0;i<n;i++){
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    int j,p=0;
    for(i=0;i<n;i++){
        for(j=n-1;j>=0;j--){
            if(arr[i]==arr[j]){
               p=1;
            }
            else{
                p=2;
            }
        }
        
    }
    if(p==1){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }

}