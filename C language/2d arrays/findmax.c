#include<stdio.h>
void main(){
    int r;
    printf("enter no. of rows:");
    scanf("%d",&r);
    int c;
    printf("enter no. of columns:");
    scanf("%d",&c);
    int i,j,arr[r][c],max=-1,idx1,idx2;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
                idx1 = i;
                idx2 = j;
            }
        }
        printf("\n");
    }
    printf("%d is max at index arr[%d][%d]",max,idx1,idx2);
}