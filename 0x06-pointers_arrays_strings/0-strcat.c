#include "main.h"
/**
 **_strcat - concanates two strings
 *@dest: the destination string
 * @src: the source string to be concatenate.
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
		i++;
	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i + 1) = '\0';
	return (dest);
}

