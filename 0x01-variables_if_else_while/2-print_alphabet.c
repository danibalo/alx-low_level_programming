#include <stdio.h>
/**
 * main - Prints the alphabets in lower case
 *
 * Return: Always zero
 */
int main(void)
{
	char lower_case = 'a';

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	putchar('\n');
	return (0);
}
