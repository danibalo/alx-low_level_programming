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
	if (n == 0)
	{
		return (0);
	}
	else {
		va_list num;
		unsigned int i, sum;
		
		va_start(num, n);
		for (i = 0; i < n; i++)
		sum += va_arg(num, int);
		va_end(num);
		return (sum);
	}
}
