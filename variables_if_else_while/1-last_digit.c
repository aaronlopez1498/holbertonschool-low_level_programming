#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prog to display and compare (><=) the last digit of n
*Return:Last digit of (n) is (the last digit of n) and its
*(> than 5, < than 6 and not 0, = is zero
*
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

		if(x > 5)
{
	printf("Last digit if %d is %d greater than 5\n", n, x);
}
if (x == 0)
{
	printf("Last digit of %d is %d and is 0\n", n , x);
}
if ((x < 6 && x != 0))
{
	printf("Last digit of %d  is %d and is less than 6 and not 0\n", n, x);
}
return (0);
}


