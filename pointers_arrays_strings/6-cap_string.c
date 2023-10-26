#include "main.h"
#include <stdio.h>
/**
 **cap_string- execute cap
 **word_start- execute bool
 *@str: point to a char string
 *Return: in cap the string
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char Separator [6] = {' ', '\t', '\n', ',', ';', '.'};
	char Separaror [7] = {'!', '?', '"', '(', ')', '{', '}'};

	for (; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		for (j = 0; j < 13 ; j++)
		{
			if (str[i] == Separator[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
