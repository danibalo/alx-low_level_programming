#include <stdio.h>
/**
 * main - Prints all lowercase letters except q and e.
 * Return: Always Success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);

		ch++;
	}
	putchar('\n');
	return (0);
}
