#include <stdio.h>
/**
*main - prints the sum of the even-valued terms, followed by a new line.
*Return: Always zero
*/
int main(void)
{
unsigned int count, fib1 = 1, fib2 = 2, sum = 0, sum2 = 0;
for (count = 0; count < 49; count++)
{
	if ((fib2 % 2 == 0) && (fib2 <= 4000000))
	{
		sum2 = sum2 + fib2;
	}
	sum = fib1 + fib2;
	fib1 = fib2;
	fib2 = sum;
}
printf("%u\n", sum2);
return (0);
}
