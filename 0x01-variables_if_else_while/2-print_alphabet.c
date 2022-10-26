#include <stdio.h>
/**
 * main - Prints the alphabets in lower case
 *
 * Return: Always zero
 */
int main(void)
{
	int a;
	while (a <= 'z')
	{
		putchar(a);
		putchar('\n');
		a++;
	}
	return 0;
}
