#include "main.h"
/**
 *print_last_digit - prints last digit of a number
 *@i: the last digit of n will be computed
 *Return:  lastdigit
 */
int print_last_digit(int i)
{
	int lastdigit = i % 10;

	if (lastdigit < 0)
		lastdigit *= -1;
	_putchar((lastdigit) + '0');
	return (lastdigit);
}
