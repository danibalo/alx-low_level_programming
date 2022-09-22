#include "main.h"
/**
 * cap_string - capitalize letters
 * @A: strings to be tested.
 * Return: char var
 */
char *cap_string(char *A)
{
	int c;

	while (A[c])
	{
		if (A[c] >= 65 && A[c] <= 90)
		{
			c++;
			continue;
		}
		else
		{
			A[c] += 32;
			c++;
		}
	}
	return (A);
}
