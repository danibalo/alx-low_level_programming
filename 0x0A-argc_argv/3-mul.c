#include "main.h"
/**
 * main - multiplies to numbers
 * @argc:number of command lines
 * @argv:array
 * Return:zero
 */
int main (int argc, char *argv[])
{
	int i, j;

	if (argc == 0 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for ( i = 1; i < 3; i++)
			j = j * atoi(argv[i]);

		printf("%d\n", j);

	}	
	return (0);
}

