#include "main.h"
/**
 * print_most_numbers - prints 0 to 9, except 2 and 4
 * Return: Always zero
 */
void print_most_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (j == 2 && j == 4)
			continue;
		else
			_putchar(j + '0');
		_putchar('\n');
	}
}

