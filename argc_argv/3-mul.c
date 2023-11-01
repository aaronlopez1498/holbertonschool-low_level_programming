#include <stdio.h>
#include <stdlib.h>

/**
 * main _ Prints the multiplication of two numbera, followed bya new line
 * @argc: The number of argument supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: if the program receives two argument - 0.
 *        if the program not receives two argument - 1.
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (arg != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);
	return (0);
}
