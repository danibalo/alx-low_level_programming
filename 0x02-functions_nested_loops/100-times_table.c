#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 *Return: Always 0 (Success)
 */
void print_times_table(int n)
{

	int i, j, pr;


	if (!(n < 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			{ 
				for (j = 0; j <=n; j++)
				{
					pr = i * j;
					if j != 0;
					{
						_putchar(',');
						_putchar(' ');
					}
					if (pr < 10 && j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar((pr % 10) + '0');
					}
					else if (res >= 10 && pr < 100)
					{
						_putchar(' ');
						_putchar((pr / 10) + '0');
						_putchar((pr % 10) + '0');
					}
					else if (pr >= 100 && j != 0)
					{
						_putchar((pr / 100) + '0');
						_putchar((pr / 10) % 10 + '0');
						_putchar((pr % 10) + '0');
					}
					else
						_putchar((pr % 10) + '0');
				}
				_putchar('\n');
	
			}
		}						
}

