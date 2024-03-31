#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum=0;
    printf("enter value of n:");
    scanf("%d",&n);
    int *numbers;
    numbers = (int*) calloc(n,sizeof(n));
    if(numbers == NULL){
        printf("memory allocation failed:");
        return 1;
    }
    printf("enter values:\n");
   for(int i=0;i<n;i++){
    scanf("%d",&numbers[i]);
    sum = sum+numbers[i];
   }
   printf("%d",sum);
   free(numbers);

return 0;
}