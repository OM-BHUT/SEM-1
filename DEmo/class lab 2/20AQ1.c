#include<stdio.h>
void main(){
    typedef struct employe{
            int emp_id;
            char name[50];
            float salary;
    }employee;
    employee a[50];
    int n;
    printf("enter no. of employee:");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        printf("enter %d employee name:",i+1);
        scanf("%s",&a[i].name);
         printf("enter %d employee id:",i+1);
        scanf("%d",&a[i].emp_id);
         printf("enter %d employee salary:",i+1);
        scanf("%f",&a[i].salary);
    }
    for(i=0;i<n;i++){
        printf("\n%s",a[i].name);
         printf("\n%d",a[i].emp_id);
          printf("\n%f",a[i].salary);

    }
}