#include "main.h"
/**
 * *_strchr- Execute function
 * @s: Points to a char
 * @c: holds a char value
 * Return: pointer to a string or null dependingon the if
 */
char *_strchr(char *s, char c)
{
	do{
		/*evaluates the valueof s at a certain position*/
		if (*s == c)
		{
			return (s);
		}
	}while (*s++);
	return (0);
}/*end function*/
