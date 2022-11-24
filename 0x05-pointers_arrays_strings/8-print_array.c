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
	int i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
		i++;
	}
	printf("\n");

}
