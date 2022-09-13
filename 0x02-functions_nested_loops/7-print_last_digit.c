#include "main.h"
/**
 *print_last_digit - prints last digit of a number
 *@i: the last digit of n will be computed
 *Return: n
 */
int print_last_digit(int i)
{
	if (i < 0)
		i = i * -1;
	_putchar((i % 10) + '0');
	return (i);
}
