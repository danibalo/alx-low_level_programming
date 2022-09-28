#include "man.h"
/**
 * support - prints square root of two numbers
 * @x: the given number
 * @y: the number to be calculated to be square root of @a
 * Return: success
 */
int support(int x, int y)
{
	if (a * a > y)
		return (-1);
	else if (a * a == y)
		return (y);
	else
		return (support(x, y + 1));
	return (1);
}
/**
 * _sqrt_recursion - prints a natural square root of a number @n
 * @n:a number to be tested
 * Return:success
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (support(n, 1));
}
