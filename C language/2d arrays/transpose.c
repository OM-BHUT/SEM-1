#include<stdio.h>
void main(){
    int r;
    printf("enter rows:");
    scanf("%d",&r);
    int c;
    printf("enter columns:");
    scanf("%d",&c);
    int i,j,arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}