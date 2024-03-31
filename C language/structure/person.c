#include<stdio.h>
#include<string.h>
void main(){
    struct person{
        char name[50];
        int salary;
        int age;
    };
    struct person a,b;
    strcpy(a.name,"ajay");
    printf("%s",a.name);
    printf("\nenter age:");
     scanf("%d",&b.age);
     printf("\n%d",b.age);

}