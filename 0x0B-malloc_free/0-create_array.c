#include "main.h"
/**
 * create_array - create charcter array
 * @c: character that is element of the created arayy
 * @size: size of characters to be formed
 * Return: zero
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(c));
	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			s[i] = c;
			i++;
		}
		s[i] = '\0';
		return (p);
	}
}


