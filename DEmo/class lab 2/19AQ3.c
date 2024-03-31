#include<stdio.h>
#include<string.h>
void main(){
	char s1[10]="sunday",s2[10]="monday";
	printf("%d\n",strlen(s1));
	printf("%d\n",strlen(s2));
	printf("comparison = %d\n",strcmp(s1,s2));
	printf("copy = %s\n",strcpy(s1,s2));
	printf("cat = %s\n",strcat(s1,s2));
	printf("reverse = %s\n",strrev(s1));
	printf("reverse = %s\n",strrev(s2));
	printf("lower = %s\n",strlwr(s1));
	printf("lower = %s\n",strlwr(s2));
	printf("upper = %s\n",strupr(s1));
	printf("upper = %s\n",strupr(s2));
	
}
