#include<stdio.h>
int main(){
    int n,r;
    printf("enter value of n:");
    scanf("%d",&n);
    printf("enter value of r:");
    scanf("%d",&r);
    int i,j,k;
    for(i=0;i<=n;i++){
        int first = 1;
        for(k=0;k<=n-i-1;k++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("%d ",first);
            first = first * (i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}