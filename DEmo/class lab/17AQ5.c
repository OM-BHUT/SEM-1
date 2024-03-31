#include<stdio.h>
void main(){
	 int n,i,*ptr;
	 printf("enter:");
	 scanf("%d",&n);
	 int arr[n];
	 for(i=1;i<=n;i++){
	 	printf("enter arr[%d]:",i);
	 	scanf("%d",&arr[i]);
	 	
	 }
	 for(i=1;i<=n;i++){
	 	ptr = &arr[i];
	 	printf("%d\n",*ptr);
	 }
}
// JAY SHREE RAM
