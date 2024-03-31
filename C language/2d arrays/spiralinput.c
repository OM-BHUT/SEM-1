#include<stdio.h>
void main(){
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    
    int i,j,arr[n][n];
    int minr = 0;
    int maxr = n-1;
    int minc = 0;
    int maxc = n-1;
    int tne = n*n;
    int count = 0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
    while(count<tne){
        for(j=minc;j<=maxc;j++){
            scanf("%d",&arr[minr][j]);
            count++;
        }
        minr++;
        if(count>tne) break;
        for(i=minr;i<=maxr;i++){
            scanf("%d",&arr[i][maxc]);
            count++;
        }
        maxc--;
        if(count>tne) break;
        for(j=maxc;j>=minc;j--){
            scanf("%d",&arr[maxr][j]);
            count++;
        }
        maxr--;
        if(count>tne) break;
        for(i=maxr;i>=minr;i--){
            scanf("%d",&arr[i][minc]);
            count++;
        }
        minc++;
        if(count>tne) break;
        
    }
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

      
      }
