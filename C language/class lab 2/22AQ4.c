#include<stdio.h>
#include<stdlib.h>
int main(){
    struct students{
        char name[50];
        int age;
        float gpa;
    };
    struct students *ptr;
    ptr = (struct students*) calloc(1,sizeof(struct students));

    printf("enter name of student:");
    scanf("%s",ptr->name);
    printf("enter age of student:");
    scanf("%d",&(ptr->age));
    printf("enter gpa of student:");
    scanf("%f",&(ptr->gpa));
    

    printf("%s\n",ptr->name);
    printf("%d",ptr->age);
    printf("\n%f",ptr->gpa);
    
    free(ptr);

    return 0;
}