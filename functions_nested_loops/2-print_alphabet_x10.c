#include <stdio.h>
#imclude "main.h"
/**
 * print_alphabet_x10 - 10 times a-z
 *
 * Return: Always 0
 * gg = G indents file
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	while (i++ <= 9)
	{
		for alpha = 'a'; alpha <= 'z' alpha++)
		{
			puchar(alpha);
		}
		putchar('\n');
		alpha++;
	}
}
