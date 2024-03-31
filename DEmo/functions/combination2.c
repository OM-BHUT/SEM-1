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
    factorial(n);
    int combination = combination1(n,r);
    printf("%d",combination);
}