#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase.
 * Return: Always Success
 */
int main(void)
{
	char ch = '0', ch1 = 'a';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	while (ch1 <= 'f')
	{
		putchar(ch1);
		ch1++;
	}


	putchar('\n');
	return (0);
}
