#include "main.h"
/**
 * _memcpy - copies n bytes from source object to destination object
 * @dest:pointer to destination object
 * @src:pointer to source object
 * @n:number of bytes to copy
 * Return: zero
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
