#include <stdio.h>
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 15)
		{
			printf("%d ", j);
			j++;
		}

		printf("\n");
		i++;
	}
}
