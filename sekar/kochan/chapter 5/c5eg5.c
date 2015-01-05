/*chapter 5 Eg5 Reverse number
  Sekar Che ,Jan 2015 */

#include <stdio.h>

int main(void)
{
	int i,j;
	
	printf ("Enter the number to Reverse :");
	scanf ("%i",&i);
	
	while (i!=0) {
		j=i%10;
		printf("%i",j);
		i=i/10;
	}
	return 0;
}
