/* Chapter 5 Eg 2, Generate a table of triangular numbers 
	Sekar Che, Jan 2015 */
	
#include <stdio.h>

int main (void)
{
	int  n, tn;	
	
	printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf (" n    Sum from 1 to 10\n");	
	printf ("---   --------------- \n");
	
	tn = 0;
	for ( n = 1;  n <= 10;  ++n ) {
		tn +=  n;
		printf (" %2i\t\t%i\n", n, tn); 
	}	
		
	return 0;
}

