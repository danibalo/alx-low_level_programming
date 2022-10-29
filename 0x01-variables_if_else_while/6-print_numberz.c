#include <stdio.h>
/**
 ** main - Prints the numbers since 0 to 9
 *Return: Always (Success)
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}


