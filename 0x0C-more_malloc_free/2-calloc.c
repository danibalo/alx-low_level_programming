#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of array
 * @size: bytes of each element
 * Return: contigous memory location
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int block, i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	block = nmemb * size;
	ptr = malloc(block);
	if (ptr == NULL)
		return NULL;
	for (i = 0; i < block; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
