#include <stdio.h>
/**
 * print_alphabet(void) - prints the alphabet in lowercase, followed by  a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		print_alphabet();

	putchar(letter);

	putchar('\n');

	return void;
}
