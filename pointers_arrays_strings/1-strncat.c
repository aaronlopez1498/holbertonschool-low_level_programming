#include <stdio.h>
#include "main.h"
/**
 **_strncat- execute the function
 *@edeet: points to a char array
 *@src: points ti a char array
 *@n: recives an int
 *Return: pointers ti dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, size = 0

		while (dest[size])
			size++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[size + i] = scr[i];

	dest[size + i] = '\0';
	return (dest);
}
