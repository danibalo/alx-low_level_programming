#include "main.h"

/**
 * *str_concat - function to allocate space for sting concatnation
 * @s1: array pointer to destination of string
 * @s2: array pointer to source of string
 * Return: return pointer to copy of string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int leng1, leng2, size, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	leng1 = 0;
	while (s1[leng1] != '\0')
		leng1++;
	leng2 = 0;
	while (s2[len2] != '\0')
		leng2++;
	size = leng1 + leng2;
	ptr = malloc ((sizeof(char) * size) + 1);
	if (ptr == NULL)
		return (NULL);

	ptr = malloc(((size1 + size2) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < leng1)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	return (ptr);
}
