#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string to be tasted
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char fe = s[0];

	while (fe != '\0')
	{
		sum++;
		fe = s[i++];
	}
	return (sum);
}

