#include "main.h"
/**
  * leet - Encodes a string into 1337
  * @s: The string to encode
  *
  * Return: The encoded string
  */
char *leet(char *s)
{
	int i = 0, j;
	char num[] = {'4', '3', '0', '7', '1'};
	char let[] = {'A','E', 'O', 'T', 'L'};

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == let[j] || s[i] == let[j] + 32)
				s[i] = num[j];
		}
		i++;
	}
	return (s);
}
