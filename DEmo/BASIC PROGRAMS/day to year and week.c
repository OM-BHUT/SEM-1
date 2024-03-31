#include<stdio.h>
void main()
{
	int year,week,day;
	printf("days into year and weeks");
	printf("\nenter days:");
	scanf("%d",&day);
	year = day/365;
	day = day%365;
	week = day/7;
	day = day%7;
	day = day;
	printf("day = %d year & %d week & %d day",year,week,day);
}
