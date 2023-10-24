#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse
 *
 * @n: the string to print
 */
void print_rev(char *n)

{
	int c = 0;

	while (n[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(n[c]);
	}
	_putchar('\n')
}
