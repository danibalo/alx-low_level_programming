#include <stdio.h>
/**
*main - prints fibonacci numbers till 50
*Return: Always zero
*/
int main(void)
{
	int count = 1;
	unsigned long fib1 = 0, fib2 = 1, sum;

	while (count <= 50)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		printf("%lu", sum);
		if (count == 49)
			printf("\n");
		else
			printf(", ");
		count++;
	}
	return (0);
}
