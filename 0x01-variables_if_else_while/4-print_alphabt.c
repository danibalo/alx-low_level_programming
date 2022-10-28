#include <stdio.h>
/**
 * main - Prints all lowercase letters except q and e.
 * Return: Always Success
 */
int main (void)
{
	char ch = 'a';

	if (ch != 'e' || ch != 'q')
	{
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
	}
	return (0);
}
