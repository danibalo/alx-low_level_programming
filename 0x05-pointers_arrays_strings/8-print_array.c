#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of arrays.
 * @a: array to be tested
 * @n: number of elements printed
 * Return: always zero
 */
void print_array(int *array, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", array[i]);
	if (i == (n - 1))
		printf("%d ", array[n - 1]);
	printf("\n");
}
