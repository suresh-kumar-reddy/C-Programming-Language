#include<stdio.h>
main()
{
	float celsius,fahrenheit;
	printf("\nEnter temperature in fahrenheit: ");
	scanf("%f",&fahrenheit);
	celsius=((fahrenheit-32)*5/9);
	printf("\n\nThe Fahrenheit=%f, after converting from celsius is=%f",fahrenheit,celsius);
	return 0;
}
