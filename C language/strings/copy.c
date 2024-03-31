#include<stdio.h>
void main(){
    char str[]="hello world";
    int k=0;
    int size=0;
    while(str[k]!=0){
        size++;
        k++;
    }
    char str2[size];
    int i;
    for(i=0;str[i]!=0;i++){
        str2[i] = str[i];
    }
    printf("str = %s\nstr2 = %s",str,str2);
}
