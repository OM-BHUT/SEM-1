#include<stdio.h>
void main()
{
    int n;
    printf("enter val:");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        if(n % 2 == 0){
            n = -n/2;
            printf("%d",n);
        }
        else{
            n = (-n/2)+n;
        }
    }
}