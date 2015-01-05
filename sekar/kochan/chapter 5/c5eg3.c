/* Chapter 5 Eg 3 Nested Loop
	Sekar Che, Jan 2015 */

#include <stdio.h>

int main (void)
{
	int  n, number, tn, counter;
	
	for ( counter = 1;  counter <= 5;  ++counter ){ /* number of choice*/
		printf ("What triangular number do you want? "); 
		scanf  ("%i", &number);
		
		tn = 0;
		for ( n = 1;  n <= number;  ++n ){	/*calc triangular number*/
			tn += n;
			printf ("Triangular number %i is %i\n\n", number, tn);
		}
	}
	
	return 0;
}

