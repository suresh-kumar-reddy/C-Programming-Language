#include<stdio.h>
#define LOWER 0
#define UPPER 30
#define STEP 1
main()
{
	int i;
	for(i=LOWER;i<=UPPER;i=i+STEP)
	{
		printf("%d\n",i);
	}
	return 0;
}
