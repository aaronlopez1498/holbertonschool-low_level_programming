:x

/**
 * puts2 - Prints one char of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int indexx = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
