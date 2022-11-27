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
	int i = 0, j = 0;

	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
			return (0);
		else
			return (s1[i] - s2[j]);
		i++;
		j++;
	}
	return (0);
	
}



