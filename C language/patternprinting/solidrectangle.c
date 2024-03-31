#include<stdio.h>
void main(){
    int n,m,i,j;
    printf("enter val:");
    scanf("%d %d",&n,&m);
    for( i = 1;i<=n;i++){
        for ( j = 1;j<=m;j++){
            printf("*");
        }
        printf("\n");
    }
}