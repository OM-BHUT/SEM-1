#include<stdio.h>
void main()
{
	int hour,minute,second;
	printf("seconds into hours and minutes");	
	printf("\nenter seconds:");
	scanf("%d",&second);
	hour = second/3600;
	second = second%3600; 
	minute = second/60;
	second = second%60;
	second = second;
	printf("HH:MM:SS=%d:%d:%d",hour,minute,second);
	
}
