#include <stdio.h>

int main ()
{
  int digits[10];
  int nc=0;
  int c, i, j, nw;
  for (i = 0; i <= 10; i++)
    digits[i] = 0;
  while ((c = getchar ()) != EOF)
    {
      ++nc;
      if (c == ' ' || c=='\n')
	{
	  ++digits[nc-1];
	  nc = 0;
	}

    }
    for (i = 1; i <= 5; i++)
	{
    	
        printf("%d :", i);
        for (j = 1; j <= digits[i]; j++)
             {
                printf ("*");
             }
 	    printf ("\n");
    }
	
}
