#include <stdio.h>
/**
*main - prints all possible combinations of single-digit numbers.
*Return: zero
*/
int main(void)
{
int n = 0;

while (n <= 9)
{
putchar('0' + n);
if (n < 9)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
