#include<stdio.h>
void main(){
    float m1,m2,m3,m4,m5,percentage;
    printf("marks to percentage:");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    percentage = (m1+m2+m3+m4+m5)/5;
    printf("percentage = %f",percentage);


}