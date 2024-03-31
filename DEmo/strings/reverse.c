#include<stdio.h>
void main(){
    char str[40];
    puts("enter value:");
    gets(str);
    int k = 0;
    int sum = 0;
    while(str[k]!='\0'){
        sum++;
        k++;
    }
    int i,j;
    for(i=0,j=sum-1;i<j;i++,j--){
        char temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("reverse value is :");
    puts(str);
}