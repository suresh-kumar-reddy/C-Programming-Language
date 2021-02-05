#include<stdio.h>
main()
{
	float celsius,fahrenheit;
	printf("\nEnter temperature in celsius: ");
	scanf("%f",&celsius);
	fahrenheit=((celsius*9)/5+32);
	printf("\n\nThe celsius=%f, after converting into fahrenheit is=%f",celsius,fahrenheit);
	return 0;
}
