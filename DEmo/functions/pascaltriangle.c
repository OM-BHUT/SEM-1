#include<stdio.h>
int factorial(int n){
    int fact = 1,i;
    for(i=2;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int combination1(int n,int r){
    int comb = factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}
int main(){
    int n,r;
    printf("enter value of n:");
    scanf("%d",&n);
    printf("enter value of r:");
    scanf("%d",&r);
    int i,j,k;
    for(i=0;i<=n;i++){
        for(k=0;k<=n-i-1;k++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            int pt = combination1(i,j);
            printf("%d ",pt);
        }
        printf("\n");
    }
    return 0;
}