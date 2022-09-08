#include <stdio.h>


/**
 * main-entry_point
 *
 *Return: always zero
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char x;
	float y;

	printf("Size of a char:%lu byte(s)\n", sizeof(x));
	printf("Size of an int:%lu byte(s)\n", sizeof(a));
	printf("Size of a long int:%lu byte(s)\n", sizeof(b));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(c));
	printf("Size of a float:%lu byte(s)\n", sizeof(y));
	return (0);





}
