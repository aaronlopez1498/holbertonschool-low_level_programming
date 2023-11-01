#include <stdio.h>

/**
 * main - prints rhe program name,followed by a new line.
 * @argc: the number of arguments supplied to the program.
 * @argv: an array of pointers to the arguments
 *
 * Return: Always o.
 */
int main( __attribute__((__unused__)) char *argc, char *argv[])
{
	printf ("%s\n", argv[0]);

	return (0);

}
