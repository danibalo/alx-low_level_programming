#include "main.h"
/**
 * array_range - creates array of integers
 * @min: minimum value
 * @max:maximum value
 * Return: returns the newly created array
 */
int *array_range(int min, int max)
{
	int i, *p, Range;

	Range = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * Range);
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}
	return (p);
}


