#include <stdio.h>
/**
*main - prints fibonacci numbers till 50
*Return: Always zero
*/
int main(void)
{
int n = 1;
int m;
while (n <= 50)
{
if (n <= 2)
{
printf("%d, ", n);
}
else if (n >= 2)
{
m = n + (n - 1);
printf("%d, ", m);
}
n++;
}
printf("\n");
return (0);
}
