#include<stdio.h>
void main(){
    int r;
    printf("enter no. of rows:");
    scanf("%d",&r);
    int c;
    printf("enter no. of coumns:");
    scanf("%d",&c);
    int i,j,arr[r][c],sum=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    
    
      for(i=0;i<r;i++){
        for(j=0;j<c;j++){
      sum = sum + arr[i][j];
        }
        
      }
      printf("sum = %d",sum);
      }
