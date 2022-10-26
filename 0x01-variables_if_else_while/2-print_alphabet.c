#include <stdio.h>
/**
 * main - Prints the alphabets in lower case
 *
 * Return: Always zero
 */
int main()
{
	int lower_case = 'a';
	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	return 0;
}
