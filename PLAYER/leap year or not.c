#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year");
	scanf("%d",&year);
	if(year%400==0)
		printf("\nleap year");
	else if(year%100==0)
		printf("\nnot a leap year");
	else if(year%4==0)
		printf("\nleap year");
	else
		printf("\nnot a leap year");
}
