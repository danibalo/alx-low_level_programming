#include "main.h"
/**
 * main - prints '_putchar' from array of characters.
 *Return: 0
 */
int main(void)
{
	char c[] ="_putchar";
	for (int i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n')
	return (0);
}
