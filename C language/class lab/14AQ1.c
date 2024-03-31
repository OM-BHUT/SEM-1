 #include<stdio.h>
void main(){
	int n,i,j,k;
	printf("enter:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter arr[%d]:",i);
		scanf("%d",&a[i]);		
	}						
   printf("normal");
   for(j=0;j<n;j++){
   	 printf("\n%d",a[j]);
   }
   printf("\n");
   printf("reverse");
   for(k = n-1;k>=0;k--){
   	printf("\n%d",a[k]);
   }
	
}
