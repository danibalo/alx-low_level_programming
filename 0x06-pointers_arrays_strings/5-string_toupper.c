#include "main.h"
/**
 * string_toupper - changes all lower cases to upper case
 *@s: The string will be modified
 * Return: char var
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) -= 32;
		i++;
	}
	return (s);
}
