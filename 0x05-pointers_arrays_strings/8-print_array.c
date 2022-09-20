#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of arrays.
 * @a: array to be tested
 * @n: number of elements printed
 * Return: always zero
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < i(n - 1); i++)
		printf("%d, ", a[i]);
	if (i == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
