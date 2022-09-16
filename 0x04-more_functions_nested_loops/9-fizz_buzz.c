#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number from 1 to 100
 * 3 multiple number prints Fizz
 * 5 multiple number prints Buzz
 * 3 and 5 multiple prints FizzBuzz
 * Return: Always zero
 */
int main(void)
{
	int i;
	char fi[] = "Fizz";
	char bu[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; 1 <= 100; i++)
	{
		if (i == 100)
			printf("%s", bu);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb);
		else if (i % 3 == 0)
			printf("%s", fi);
		else if (i % 5 == 0)
			printf("%s ", bu);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
