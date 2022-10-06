#include "main.h"
/**
 * string_nconcat - concanates to strings
 * @s1: the destination string
 * @s2: the source string
 * @n: number of byte to be concanated from s2 to s1
 * Return: pointer to allocated memort
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_ln, i, j = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_ln = 0;
	while (s1[s1_ln])
	{
		s1_ln++;
	}
	p = malloc(sizeof(char) * s1_ln + n + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (s1_ln + n); i++)
	{
	if (i < s1_ln)
	{
		p[i] = s1[i];
	}
	else
	{
		p[i] = s2[j++];
	}
	}
	p[i] = '\0';
	return (p);
}
