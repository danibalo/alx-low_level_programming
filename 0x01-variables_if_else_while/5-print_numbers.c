#include <stdio.h>
/**
 * main -Prints prints all single digit numbers of base 10 starting from 0.
 *Return: always success
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
