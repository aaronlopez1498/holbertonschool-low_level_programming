#include "main.h"

/**
 * puts2 - Prints one char of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int indexx = 0, len = 0;

	while (str[indexx++])
		len++;

	for (indexx = 0; indexx < len; indexx += 2)
		_putchar(str[indexx]);

	_putchar('\n');
}
