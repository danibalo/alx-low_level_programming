#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *Return: Zero 
 */
void times_table(void)
{
	int i;
	int n;
	int pr;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (n = 1; n < 10; n++)
		{
			_putchar(',');
			_putchar(' ');

			pr = i *n;

			if (pr <= 9)
				_putchar(' ');
			else
				_putchar((pr / 10) + '0');

			_putchar((pr % 10) + '0');
		}
		_putchar('\n');
	}
}

