#include<stdio.h>
void main(){
    int n;
    printf("enter no. of rows of 1st matrix:");
    scanf("%d",&n);
    int m;
    printf("enter no. of columns of 1st matrix:");
    scanf("%d",&m);
    printf("enter elements of 1st matrix:\n");
    int arr[n][m];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int p;
    printf("enter no. of rows of 2nd matrix:");
    scanf("%d",&p);
    int q;
    printf("enter no. of columns of 2nd matrix:");
    scanf("%d",&q);
    printf("enter elements of 1st matrix:\n");
    int brr[p][q];
    int res[m][q],k;
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    if(n!=p){
        printf("matrix will not be multiplied:");
    }
    else{
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                res[i][j]=0;
                for(k=0;k<n;k++){
                    res[i][j] = res[i][j] + arr[i][k]*brr[k][j];
                }
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
}