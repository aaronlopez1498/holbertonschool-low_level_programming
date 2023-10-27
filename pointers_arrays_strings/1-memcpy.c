#include "main.h"

/**
 * _memcpy - Entry point
 * @d: input
 * @sr: input
 * @t: input
 * Return: Always 0 (Success)
 */
char *_memcpy(char *d, char *sr, unsigned int t)
{
	unsigned int i;

	for (i = 0; i < t; i++)
		d[i] = sr[i];

	return (d);
}
