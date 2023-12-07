nclude "main.h"
#include <stdio.h>
/**
 * reverse_array- Exevute function
 * @a: points to an int array
 * @n: hols an int (size)
 */
void reverse_array(int *a, int n)
{
	/*Variablesa*/
	int f = 0, temp;
	/*Reverse loop*/
	for (; f < n--; f++)
	{
		/*switcht position*/
		temp = a[n];
		a[n] = a[f];
		a[f] = temp;
	} /*end for*/
} /*end reverse_array*/
