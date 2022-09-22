#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses elements of a given array
 * @a: the array to be tested
 * @n: elements of aray
 * Retturn: Always success
 */
void reverse_array(int *a, int n)
{
	int *p, i, k, b;

	for (i = 1; i < n; i++)
	{
		p++;
	}
	for (k = 0; k < i / 2; k++)
	{
		b = a[k];
		a[k] = *p;
		*p = b;
		p--;
	}
}

