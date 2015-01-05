/* Chapter 5 Eg 4 Find the GCD
   Sekar Che ,Jan 2015 */

#include <stdio.h>

int main (void)
{
	int u;
	int v;
	int temp;

	printf ("Enter the 2 number to find GCD:");
	scanf ("%i\n%i", &u, &v);

	while (v != 0) {
		temp = u % v;
		u = v;
		v = temp;
	}

	printf ("GCD Number: %i", u);
	
	return 0;
}

