#include<stdio.h>
main()
{
	int nc=0;
	for(nc=0;getchar()!=EOF;++nc);
	printf("%d",nc);
}
