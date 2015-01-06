/*Chapter 5 Ex.3 Display Every Fifth Triangle Number 5 to 50
Sekar Che, Jan 2015 */

#include <stdio.h>

int main (void)
{
    int n=5;
	int tno=0;

    printf ("Table That Displays Every Fifth Triangle Number (TN) From 5 to 50\n\n");
    printf ("  Root     TN \n");
    printf ("=============== \n");
    
    while ( n <= 50 ) {
    	tno = n * (n + 1) / 2;
    	printf ("   %2i    %4i\n", n,tno);
    	n=n+5;
	}
  
    return 0;
}

