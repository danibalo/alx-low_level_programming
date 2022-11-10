#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 *Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j;
	int mul;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar (',');
				_putchar (' ');
				mul = i * j;

				if (mul <= 99)
					_putchar(' ');
				if (mul <= 9)
					_putchar(' ');
				if (mul >= 100)
				{
					_putchar(mul / 100 + '0');
					_putchar((mul / 10) % 10 + '0');
					_putchar(mul % 10 + '0');
				}
				else if (mul >= 10 && mul <= 99)
				{
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
				}
				else
					_putchar(mul + '0');
			}
			_putchar('\n');
		}
	}
}
