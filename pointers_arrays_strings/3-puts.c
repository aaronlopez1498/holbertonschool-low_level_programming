#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout.
 * @str: The string to be printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
