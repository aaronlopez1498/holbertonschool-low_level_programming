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
	char *start = accept;
	int flag;

	do{
		flag = 0;
		do{
			if (*accept == *s)
			{
				check++;
				flag = 1;
				break;
			}
			accept++;
		} while (*accept);
		s++;
		accept = start;
		if (flag == 0)
			break;
	} while (*s);
	return (check);
}
