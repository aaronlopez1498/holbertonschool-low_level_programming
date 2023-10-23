#include "main.h"
#inlude <stdio.h>
/**
 * swap_int- Execute function
 * @a:pointer that points to an int
 * @b: pointer that point to an int
 */
void swap_int(int *a, int *b)
{
	int prov;
   prov = *a;
	*a = *b;
	*b = prov;
}
