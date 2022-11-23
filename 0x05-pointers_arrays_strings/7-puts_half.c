#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len_str, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i = 0, n;

	while(str[i] != '\0')
		i++;
	n = i / 2;

	if (n % 2 == 1)
		n = (i + 1) / 2;
	for (; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
