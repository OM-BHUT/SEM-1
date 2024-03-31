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
    int l1;
    printf("enter l1:");
    scanf("%d",&l1);
    int r1;
    printf("enter r1:");
    scanf("%d",&r1);
    int l2;
    printf("enter l2:");
    scanf("%d",&l2);
    int r2;
    printf("enter r2:");
    scanf("%d",&r2);
    
    
      for(i=l1;i<=r1;i++){
        for(j=l2;j<=r2;j++){
      sum = sum + arr[i][j];
        }
        
      }
      printf("sum = %d",sum);
      }
