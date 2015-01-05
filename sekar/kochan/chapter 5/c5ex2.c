/* Chapter 5 Ex.2 Display N and N^2 of ten numbers
	Sekar Che, Jan 2015 */
	
#include <stdio.h>

int main (void)
{
    int n = 1;

    printf ("Table That Displays N and N^2 upto 1 to 10 \n\n");
    printf (" N  N^2\n");
    printf ("========\n");
    
    
    while ( n <= 10 ) {
    	printf ("%2i  %3i\n", n,n*n);
    	++n;
	}
	
    return 0;
}
