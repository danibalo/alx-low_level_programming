#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits
 * The two digits must be different
 * Numbers must be separated by ,followed by a space
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * i: tens
 * j: ones
 * Return: Always (Success)
 */
int main(void)
{
	int i;
	int j;
	

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8)
			{
				putchar (',');
				putchar (' ');
			}
		
		}
	}
	putchar ('\n');
	return (0);
}

