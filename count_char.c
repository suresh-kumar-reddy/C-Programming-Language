#include<stdio.h>
main()
{
	int nc=0;
	char c;
	while((c=getchar())!=EOF)
	{
		++nc;
	}
	printf("The number of characters you entered are: %d",nc);
}
