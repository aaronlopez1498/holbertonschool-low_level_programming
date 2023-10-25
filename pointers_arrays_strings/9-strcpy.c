#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies a string.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len i;

	len = 0;

	while (src[len] ! = '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	
	return (dest);
}
