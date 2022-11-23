#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len_str, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, n, len_str = 0, j;

	for (i = 0; str[i] != 0; i++)
	{
		len_str++;
	}
	if (len_str % 2 == 0)
	{
		for(j = len_str / 2; j < len_str; j++)
		{
			_putchar(str[j]);
		}
	}
	else if((len_str % 2) != 0)
	{
		for (n = (len_str - 1) / 2; n < len_str; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}				
