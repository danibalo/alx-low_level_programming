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
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
