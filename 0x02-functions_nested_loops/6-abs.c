#include "main.h"
/**
 *_abs - computes absolute value of integer
 *@n: integer type is the input for absolute value
 *Return: n
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
