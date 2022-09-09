#include <stdio.h>
/**
 * main-Prints alphabet in lowercase and then, in uppercase
 * Return: Always success
 */
int main(void)
{
	char c, C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
