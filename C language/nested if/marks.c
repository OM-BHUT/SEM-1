#include<stdio.h>
void main(){
    int n;
    printf("enter no:");
    scanf("%d",&n);
    if(n>90){
        printf("a grade");
    }
    else{
        if(n>80){
            printf("b grade");
        }
        else{
            if(n>60){
                printf("c grade");
            }
            else{
                if(n>40){
                    printf("d grade");
                }
                else{
                    printf("fail");
                }
            }
        }
    }
}