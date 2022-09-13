#include "main.h"
/**
 *_abs - computes absolute value of integer
 *@int: integer type is the input for absolute value
 *Return: zero
 */
int _abs(int n)
{
	
	int m = -1 * n;

	if (n > 0)
	{
		_putchar(n);
	}
	else if (n == 0)
	{
		_putchar(n);
	}
	else if (n < 0)
	{
		_putchar(m);
	}
	return (0);
}
