#include<stdio.h>
void main(){
    int sp,cp,profit,loss;
    printf("enter sp:");
    scanf("%d",&sp);
    printf("enter cp:");
    scanf("%d",&cp);
    if(sp<cp){
        printf("trader is in loss\n");
        loss = cp-sp;
        printf("loss = %d",loss);
    }
     if(sp == cp){
        printf("trader has no loss and no profit");
    }
    else {
        printf("trader is in profit\n");
        profit = sp-cp;
        printf("profit = %d",profit);
    }
}