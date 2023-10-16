#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main-program to sort numbers if positive negative or zero
 *Return:positive if > 0, negative if < 0, zero if = 0;
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */

				if (n>0)
					printf(" is positive\n,n");
				else if (n==0)
					printf(" is zero\n,n");
				else
					printf("is negative\n,n");
				return (0);
}
