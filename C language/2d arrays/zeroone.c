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
        int count = 0;
        for(j=0;j<c;j++){
            if(arr[i][j]==1){
            count ++;
            }
        }
        if(maxsum<count){
            maxsum = count;
            idx1 = i;
            idx2 = j;
        }
    }
    printf("%d at arr[%d][%d]",maxsum,idx1,idx2);
      
      }
