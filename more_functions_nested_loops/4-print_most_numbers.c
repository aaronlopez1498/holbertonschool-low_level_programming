#include "main.h"

/**
 * print_most_number Print the number from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num !=4)
			_putchar(( % 10) + '0');
	}

	_putchar('\n');
}
