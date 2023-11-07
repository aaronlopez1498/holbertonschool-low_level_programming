#include "main.h"
#include <stdlib.h>

**_st:::  Returns a pointer to a newly-allocated space in memory
containing a copy of the string given as parameter.
* str: The string to be copied.
*
* Return: if str == NULL or insufficient memory is avaliable - NULL.
*    Otherwise - a pointer the duplicate string.
*/
char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
