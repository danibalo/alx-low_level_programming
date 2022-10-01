#include "main.h"
/**
 * _strcmp - compares two strings character by character
 * @s1: first string with to be compared
 * @s2: second character to be compared.
 * Return: 0 if the strings are equal
 * >0 if s1 > s2
 * <0 if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0, m;

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (i <= j)
	{
		m = i;
	}

	else
	{
		m = j;
	}
	while (k <= m)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			l = s1[k] - s2[k];
				break;
		}
		k++;
	}
return (l);
}



