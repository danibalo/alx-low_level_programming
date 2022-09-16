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

	for (i = 1; 1 <= 100; i++)
	{
		if (i == 0)
			printf("Buzz")
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else 
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
