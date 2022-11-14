#include <stdio.h>
/**
*main -  prints the first 98 Fibonacci numbers,
*Return: zero
*/
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum = 0;

	while (count < 97)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		count++;
		printf("%lu, ", sum);
	}
	printf("\n");

	return (0);
}

