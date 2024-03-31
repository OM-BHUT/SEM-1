#include<stdio.h>
void main(){
    int n;
    printf("enter rows:");
    scanf("%d",&n);
   
    int i,j,arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("enter arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
           int temp = arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
        }
    }
    int k;
    for(i=0;i<n;i++){
        j=0;
        k=n-1;
        while(j<k){
            int temp1 = arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp1;
            j++;
            k--;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}