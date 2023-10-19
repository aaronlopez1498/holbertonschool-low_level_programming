#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet(void) - prints the alphabet in lowercase, followed by  a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		putchar(letter);

	putchar('\n');

}
