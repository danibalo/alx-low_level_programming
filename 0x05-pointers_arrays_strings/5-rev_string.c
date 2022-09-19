#include "main.h"
/**
 * rev_string - reverses string
 * @s: string to be reversed
 * Return: Always zero
 */

void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int n;

	while (s[c] != '\0')
		c++;
	for (n = 0; n < c; c++)
	{
		c--;
		rv = s[n];
		s[n] = s[c];
		s[c] = rv;
	}
}


