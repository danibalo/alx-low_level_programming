#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: is a pointer to null terminated byte
 * @c:a character to search for
 * Return: zero
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
