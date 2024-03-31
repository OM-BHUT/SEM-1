#include<stdio.h>
void main(){
    typedef struct cricket{
     char firstname[20];
     char lastname[20];
     int age;
     int testmatch;
     float averageruns;
    }cricketer;
    cricketer arr[5];
    int i;
    for(i=0;i<3;i++){
        printf("enter name of %d cricketer:",i+1);
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].lastname);
        printf("enter age of %d cricketer: ",i+1);
        scanf("%d",&arr[i].age);
        printf("enter testmatch of %d cricketer: ",i+1);
        scanf("%d",&arr[i].testmatch);
        printf("enter averageruns of %d cricketer: ",i+1);
        scanf("%f",&arr[i].averageruns);

    }
    for(i=0;i<3;i++){
        printf("\nname = %s %s",arr[i].firstname,arr[i].lastname);
         printf("\nage = %d",arr[i].age);
          printf("\ntest match = %d",arr[i].testmatch);
           printf("\naverage runs = %f",arr[i].averageruns);
    }
}