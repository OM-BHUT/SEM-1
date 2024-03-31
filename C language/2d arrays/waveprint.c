#include<stdio.h>
void main(){
    int r;
    printf("enter no. of rows:");
    scanf("%d",&r);
    int c;
    printf("enter no. of coumns:");
    scanf("%d",&c);
    int i,j,arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<c;j++){
        if(j % 2 == 0){
            for(i=r-1;i>=0;i--){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(i=0;i<r;i++){
                printf("%d ",arr[i][j]);
            }
        }
    }
      
      }
