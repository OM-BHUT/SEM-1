#include<stdio.h>
void main(){
    int n,x;
    printf("enter:");
    scanf("%d",&n);
    int i,j,k,arr[n],triplet=0;
    for(i=0;i<n;i++){
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }//arr[8]={1,2,3,4,5,6,7,8}
    printf("enter value of x:");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    triplet++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("triplets = %d",triplet);  
}