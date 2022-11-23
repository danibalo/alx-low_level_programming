#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s : string to be printed
 * Return: Always zero
 */
void print_rev(char *s)
{
	int i, j = 0, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (k = (j - 1); k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}

