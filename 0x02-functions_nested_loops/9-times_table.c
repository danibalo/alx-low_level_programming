#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *Return: Zero 
 */
void times_table(void)
{
	int i;
	int n;
	int pr =i*n;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (n = 1; n < 10; n++)
		{
			_putchar(',');
			_putchar(' ');
			if (pr <= 9)
				_putchar(' ');
			else
				_putchar((pr / 10) + '0');
				_putchar((pr % 10) + '0');
		}
		_putchar('\n');
	}
}

