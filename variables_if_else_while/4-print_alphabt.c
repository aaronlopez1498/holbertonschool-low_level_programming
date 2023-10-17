#include < stdio.h >
/**
 * main _ Print the alphabet in lowercase, except (letter = 'q', letter = 'e')
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter++;)
		putchar(letter);

	for (letter = 'z'; letter++;)
		putchar(letter);

	return (0);
}
