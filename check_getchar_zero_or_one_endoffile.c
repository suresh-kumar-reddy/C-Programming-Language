#include<stdio.h>
main()
{
	char c;
	int is_zero_or_one;
	while((c=getchar())!=EOF)
	{
		putchar(c);
		break;
	}
	is_zero_or_one=(c=getchar()!=EOF);
	printf("\n\n%d",EOF);
	printf("\nThe end of the getchar value is:%d",is_zero_or_one);

}
