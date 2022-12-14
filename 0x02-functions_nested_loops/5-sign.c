#include "main.h"
/**
 *print_sign - test whether a number is a positive, zero or negative.
 *@n: is tested
 *Return: return 1 if positive, return 0 if 0, return -1 if negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if	(n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
