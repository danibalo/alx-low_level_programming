/*
 * File: 0-sum_them_all.c
 * Auth: Dani B T
 */

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0, sum = 0;

	if (n != 0)
	{
		va_start(num, n);
		for (i = 0; i < n; i++)
			sum += va_arg(num, unsigned int);
		va_end(num);
		return (sum);
	}
	return (0);
}
