#include "main.h"

/**
 * _strspn - Entry point
 * @t: input
 * @acc: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *t, char acc)
{
	unsigned int i, n, value, check;
		value = 0;

	for (i = 0; t[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; acc[n] != '\0'; n++)
		{
			if (acc[n] == t[i])
			{
				value++;
				check = 1;
			}
		}
	}
}
