#include "main.h"
/**
 * _print_rev_recursion - prints string reverse
 *@s:string to be reserved
 *Return: zero
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

