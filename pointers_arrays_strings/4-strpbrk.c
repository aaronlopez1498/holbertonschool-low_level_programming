#include "main.h"

/**
 *_strpbrk - Searches a string for any of a set of byte.
 *@s: The string to be searched.
 *@accept: the setv of bytes to be searched for.
 *
 *Return: ifa set is matchad - a pointer to the matched byte
 if no set is matched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
