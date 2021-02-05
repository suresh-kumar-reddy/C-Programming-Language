#include<stdio.h>
main()
{
	int year;
	printf("Enter the year to show if its a leap year or not: ");
	scanf("%d",&year);
	if(((year%100)!=0)&&((year%4)==0)||((year%400)==0))
	{
		printf("%d is a leap year",year);
	}
	else
	{
		printf("%d is not a leap year",year);
	}
}
