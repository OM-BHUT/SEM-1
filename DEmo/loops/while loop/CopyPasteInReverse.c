#include<stdio.h>
void main()
{
    int n,ld;
    printf("enter val:");
    scanf("%d",&n);
    int count = 0;
    int sum = n;
    while(n != 0){
        ld = n%10;
        count = count * 10;
        count = (count + (ld*10));
        
        n = n/10;
    }
    sum = sum + count;
    
    printf("%d",sum);
}