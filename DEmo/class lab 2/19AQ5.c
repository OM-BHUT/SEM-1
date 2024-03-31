#include<stdio.h>
int find(char str[],char ch,char replace){
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            str[i] = replace;
           
        }
    }
     
}
int main(){
    char str[] = "darshan university";
    char ch = 's';
    char replace = '*';
    int position = find(str,ch,replace);
     printf("after replacement %s",str);
}

