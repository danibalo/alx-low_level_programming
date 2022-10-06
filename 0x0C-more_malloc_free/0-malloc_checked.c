#include "main.h"
/**
 * malloc_checked - that allocate memory
 * @b: the variable tobe allocated
 * Return: always zero
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
