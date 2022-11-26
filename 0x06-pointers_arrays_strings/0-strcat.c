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

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';
	return (dest);
}

