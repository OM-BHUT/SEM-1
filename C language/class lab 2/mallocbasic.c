#include<stdio.h>
#include<stdlib.h>
void main(){
   int n;
   printf("enter:");
   scanf("%d",&n);
   int *ptr = (int*) malloc(10*sizeof(int));
   int *p = ptr;
   int i;
   for(i=1;i<=n;i++){
    scanf("%d",&(*ptr));
    ptr++;
   }
   for(i=1;i<=n;i++){
    printf("%d",(*p));
    p++;
   }
}