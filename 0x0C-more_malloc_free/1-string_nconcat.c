#include "main.h"
/**
 * string_nconcat - concanates to strings
 * @s1: the destination string
 * @s2: the source string
 * @n: number of byte to be concanated from s2 to s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	int s1_ln, i, size, *p;
	
	while (s1[s1_ln])
	{
		s1_ln++;
	}
	while (i < n && s2[i])
	{
		s1[s1_ln] = s2[i];
		s1_ln++;
	}
	if (n >= s2[i])
	{
		size = s2[i];
	}
	else
	{
		size = s1[s1_ln] + 1;
	}
	p = malloc(size * sizeof(char));
	return (p);
}



