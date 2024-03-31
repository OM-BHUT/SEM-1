#include<stdio.h>
void main(){
    float m1,m2,m3,m4,percentage;
    printf("enter marks:");
    scanf("%f %f %f %f",&m1,&m2,&m3,&m4);
    percentage = (m1+m2+m3+m4)*100/160;
    printf("percentage = %f",percentage);

}