#include "main.h"
#include <stdio.h>

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int check = 0;

	do{
		do{
			if (*accept == *s)
			{
				check++;
			}
		} while (*s++);
	} while (*accept++);
	return (check + 1);
}
