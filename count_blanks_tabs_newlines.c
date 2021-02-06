#include <stdio.h>

/*  program to count blanks, tabs, and newlines */

main (){
long blanks, tabs, newlines, input;

    blanks = 0;
    tabs = 0;
    newlines = 0;
    input = 0;
    while ((input = getchar()) != EOF)
        if (input == '\n')
            ++newlines;
        else if (input == '\t')
            ++tabs;
        else if (input==' ')
        	++blanks;
			printf("Total newlines: %ld\nTotal Tabs: %ld\nTotal blanks:%ld", newlines, tabs,blanks);
}
