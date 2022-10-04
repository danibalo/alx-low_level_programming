#include "main.h"
/**
 * _strlen - prints string length
 * @s:string to be tested.
 * Return: zero
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}
/**
 * _strdup - copies string
 * @str: the string to be copied
 *Return: always zero
 */

char *_strdup(char *str)
{
	char *p;
	int size;
	int j = 0;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	p = malloc(size * sizeof(char));
	while (j < size)
	{
		if (p == 0)
		{
			return (NULL);
		}
		else
		{
			p[j] = str[j];
			j++;
		}
	}
	return (p);
}


