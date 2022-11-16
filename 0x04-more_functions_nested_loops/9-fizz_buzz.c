#include "main.h"
#include <stdio.h>

/**
  * main - Prints a Fizz Buzz program
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("Fizz Buzz ");
		else
			printf("%d ", n);
		n++;
	}
	printf("\n");
	return (0);
}
