#include "main.h"


/**
 * _strcat - Execute function
 * @dest: Points to a char
 * @src: Points to a char
 *
 * Return: return dest pointer
 */
char *_strcat(char *dest, const char *src)
 {
	 int size = 0, j;

	 while (dest[size])
	 {
		 size++;
	 }
	 for (j = 0; j < size + 1 && src[j]; j++)
	 {
		 dest[size++] = src[j];
	 }
	 dest[size] = '\0';
	 return (dest);
 }
