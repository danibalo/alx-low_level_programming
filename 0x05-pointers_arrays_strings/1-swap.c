#include "main.h"
/**
*swap_int - swaps value of integers
*@a : the first integer to be swapped
*@b : the 2nd integer to be swapped
*Return: zero
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}	
