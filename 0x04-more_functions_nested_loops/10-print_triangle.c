#include "main.h"
/**
 * print_triangle - Prints a triangle
 * @size: sets the size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i = 1, j;
	if (size < 0)
		_putchar('\n');
	else
	{

	while (i <= size)
	{
		j = 0;
		while (j <= size - i)
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		while (j < i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	}
	if (i == 1)
		_putchar('\n');
}
