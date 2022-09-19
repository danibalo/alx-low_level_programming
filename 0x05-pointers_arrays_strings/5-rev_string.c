#include "main.h"
/**
 * rev_string - reverses string
 * @s: string to be reversed
 * Return: Always zero
 */
void rev_string(char *s)
{
	int i, k;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	for (k = (c - 1); k >= 0; k--)
	{
		_putchar(s[k]);
	}
}


