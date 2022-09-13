#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *Return: Zero 
 */
void times_table(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int n = 0; n < 10; n++)
		{
			_putchar(i * n);
			_putchar('\n');
			n++;
		}
		_putchar(i);
		_putchar('\n');
		i++;
	}
