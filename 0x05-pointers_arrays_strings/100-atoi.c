#include "main.h"
/**
* _atoi - Convert string to an integer.
* @s: Pointer to a character string.
*
* Return: void.
*/

int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	unsigned int result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		sign *= -1;
		i++;
	}
	if (s[i] != '\0')
	{
		do

		{
			result = result * 10 + (s[i] - '0');
			i++;
		} while (s[i] >= '0' && s[i] <= '9');
	}
	return (result * sign);


}
