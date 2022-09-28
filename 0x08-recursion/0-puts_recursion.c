#include "main.h"
/**
 * _puts_recursion(char *s) - prints string followed by newline
 * @s: string to be printed
 *
 * Return: 0
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;
	if s[i] = '\0'
		return (0);
	while (s[i] = '\0')
		i++;
	_puts_recursion(i);
	_putchar('\n');
}
