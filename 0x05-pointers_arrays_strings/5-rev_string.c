#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *s)
{
	int i = 0, j, k;
	int rev;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	k = 0;
	while (k < j)
	{
		rev = s[k];
		s[k] = s[j];
		s[j] = rev;
		k++;
		j--;
	}
}
