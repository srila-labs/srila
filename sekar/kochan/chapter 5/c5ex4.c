/* Chapter 5 Ex4 Displays First 10 Factoral total
	Sekar Che, Jan 2015 */
	
#include <stdio.h>

int main (void)
{
    int n;
	int n_temp;
	int counter;
	int f;
	int f_temp;
    
    printf ("Displays First 10 Factorals\n\n");
    printf (" Root  Factoral\n");
    printf ("=================\n");
    
    n = 1;    
    while ( n <= 10 ) {      
          n_temp = n;
          f = n;
          counter = 1;
            
          while (counter < n){                              
                f_temp = f * (n_temp -1);                              
                f = f_temp;                             
                n_temp = n_temp - 1;                              
                ++counter;
          }
          
          printf (" %2i   %7i\n", n, f );  
          ++n;
    }

    printf ("\n");
    return 0;
}

