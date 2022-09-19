#include "main.h"
/**
 * _puts - prints string
 * @str: string to be printed
 * Return: zero
 */
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
