#include<stdio.h>
int find(char str[],char ch){
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i] == ch){
            return 3;
        }
    }
    return -1;

    
    
}
void main(){
    char str[] = "darshan university";
    char ch = 's';
    int position = find(str,ch);
    if(position != -1){
        printf("character founded:");
    }
    else{
        printf("character not found:");
    }
}

