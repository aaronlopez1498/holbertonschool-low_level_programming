#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if a character is alphabetic.
 * @c: The character to be checked
 *
 * Return: 1 if the character is letter, lowercase or uppercase, 0 otherwwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
