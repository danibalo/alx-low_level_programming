#include "main.h"
/**
 * _strncpy - copy strings
 * @dest: the destination string where to copied
 * @src: the source string that copied
 * @n: most bytes of scr file
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

