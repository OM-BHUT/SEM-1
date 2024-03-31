#include<stdio.h>
int min(int a,int b){
       if(a>b) return a;
       else return b;
}
int hcf1(int a,int b){
    int hcf,i;
    for(i=1;i<min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    return hcf;
}
void main(){
    int a;
    printf("enter 1st number:");
    scanf("%d",&a);
    int b;
    printf("enter 2nd number:");
    scanf("%d",&b);
    min(a,b);
    int hcf = hcf1(a,b);
    printf("%d",hcf);
}