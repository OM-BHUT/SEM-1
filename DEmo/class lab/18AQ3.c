#include<stdio.h>
void sa(float,float,float);
void main(){
	 float p,r,t;
	 printf("enter:");
	 scanf("%f",&p);
	 printf("enter:");
	 scanf("%f",&r);
	 printf("enter:");
	 scanf("%f",&t);
	 sa(p,r,t);
}
void sa(float p,float r,float t){
	float simp;
	simp = (p*r*t)/100;
	printf("%f",simp);
}

