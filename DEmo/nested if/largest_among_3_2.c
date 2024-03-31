#include<stdio.h>
void main(){
    int ram,shyam,ajay;
    printf("enter age:");
    scanf("%d %d %d",&ram,&shyam,&ajay);
    if(ram>shyam){
        if(ram>ajay){
            printf("ram is most aged");
            else{
                printf("ajay is most aged");
            }

        }
    }
        else{
            if(shyam>ajay){
                printf("shyam is most aged");
            }
            else{
                printf("ajay is most aged");
            }
        }
    }
