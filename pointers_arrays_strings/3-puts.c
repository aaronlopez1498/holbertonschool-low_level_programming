#include "main.h"

/**
 * _puts - Printer
 * @str: string to be printed.
 */

void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0');
{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
