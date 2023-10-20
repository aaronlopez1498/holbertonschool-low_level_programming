#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table, startimg with 0.
 */
void times_table(void)
{
	int num, mult, prod;
	times_table();

	for (num = 0; num <= 9; num++)
	{
		putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			putchar(',');
			putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				putchar (' ');
			else
				putchar((prod / 10) + '0');

			putchar((prod % 10) + '0');
		}
		putchar('\n');
	}
}
