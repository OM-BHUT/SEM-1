#include<stdio.h>
float max(float,float,float,float);
float main(){
	float a,b,c,max1;
	printf("enter:");
	scanf("%f",&a);
	printf("enter:");
	scanf("%f",&b);
	printf("enter:");
	scanf("%f",&c);
	float max2=max(a,b,c,max1);
	printf("%f",max2);
}
float max(float a,float b,float c,float max1){
	 max1=a;
	if(b>max1){
		max1 = b;
	}
	
	if(c>max1){
		max1 = c;
	}
		return max1;

}


