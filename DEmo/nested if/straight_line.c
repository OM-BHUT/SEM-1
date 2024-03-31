#include<stdio.h>
void main(){
    double x1,x2,x3,y1,y2,y3,m1,m2;
    printf("enter no:");
    scanf("%d",&x1);
    scanf("%d",&x2);
    scanf("%d",&x3);
    
    scanf("%d",&y1);
    scanf("%d",&y2);
    scanf("%d",&y3);
    m1 = (y2-y1)/(x2-x1);
    printf("m1 = %d",m1);
    m2 = (y3-y2)/(x3-x2);
    printf("\nm2 = %d",m2);
    if(m1 = m2){
        printf("\nstraight line");
    }
    else{
        printf("not straight line");
    }

}