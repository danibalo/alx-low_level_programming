#include <stdio.h>

/**
  * cap_string -  capitalizes all words of a string.
  * @s: string to ber modified
  *
  * Return: char value
  */
char *cap_string(char *s)
{
	int i = 0, j;
	char Sep[] = {'"', ' ', ',', '\n', '\t', '?', '!', '.', '(', ')', '{', '}'};

	while (s[i])
	{
		for (j = 0; Sep[j]; j++)
		{
			if ((s[i - 1] == Sep[j]) && (s[i] >= 97 && s[i] <= 122))
				s[i] -= 32;
		}
		i++;
	}
	return (s);

}

