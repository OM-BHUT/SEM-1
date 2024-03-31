#include<stdio.h>
void main(){
	int x,y,mult=1,i;
	printf("enter:");
	scanf("%d",&x);
	printf("enter:");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		mult = mult*x;
	}
	printf("%d",mult);
	
}
