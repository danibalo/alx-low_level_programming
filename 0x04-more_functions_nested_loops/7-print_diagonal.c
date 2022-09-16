#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of characters '\'
 * Return: Always zer
 */
void print_diagonal(int n)
{
	int r, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= n; r++)
		{
			for (c = 1; c < r; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
