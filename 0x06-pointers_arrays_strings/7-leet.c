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
	char *num = "4433007711";
	char let[] = "AaEeOoTtLl";

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == let[j])
				s[i] = num[j];
		}
		i++;
	}
	return (s);
}
