#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point
 * @a: input
 * @d: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *a, char d)
{
	int i;
	for (i = 0; a[i] >= '\0'; i++)
	{
		if (a[i] == d)
			return ( a + i);
	}
	return (NULL);
}
