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
        printf("\n");
    }
    int maxsum = -1;
    int idx1=0 ,idx2=0;
    for(i=0;i<r;i++){
        int sum = 0;
        for(j=0;j<c;j++){
            sum += arr[i][j];
        }
        if(maxsum<sum){
            maxsum = sum;
            idx1 = i;
            idx2 = j;
        }
    }
    printf("%d at arr[%d][%d]",maxsum,idx1,idx2);
      
      }
