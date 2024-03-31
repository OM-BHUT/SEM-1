#include<stdio.h>
void main()
{
    int n;
    printf("enter val:");
    scanf("%d",&n);
    int sum = 0;
    while (n != 0){
        int ld = n%10;
        sum =sum + ld;
        n = n/10;
    }
    printf("%d",sum);
}