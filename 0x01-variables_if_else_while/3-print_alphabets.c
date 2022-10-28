#include <stdio.h>
/**
 * main-Prints alphabet in lowercase and then, in uppercase
 * Return: Always success
 */
int main(void)
{
	char ch = 'a', CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar ('\n');
	return (0);
}

