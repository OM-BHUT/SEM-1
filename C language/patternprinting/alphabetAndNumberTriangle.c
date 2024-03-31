#include<Stdio.h>
void main(){
	int n,i,j,d;
	printf("enter:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int a=1;
		for(j=1;j<=i;j++){
		
		if(i%2 == 0){
			d = a+64;
			char ch=(char)d;
			printf("%c ",ch);
			a++;
			
		}
		
		else{
			printf("%d ",j);
		}
	
		
		}
		printf("\n");
	}
}
