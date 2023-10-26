#include "main.h"
#include <stdio.h>
/**
 * *_strncpy- Execute function
 * @dest: Points to a cahr
 * @src: points to a cahr
 * @n: receives an int
 * Return: a pointer to an array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int size = 0, j = 0;
	while (dest[size])
	{
		size++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];

	for (;j < n; j++)
		dest[j] = '\0';

	return (dest);
}
