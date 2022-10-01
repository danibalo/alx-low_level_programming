#include "main.h"
/**
 * _memset - copies the value to number of bytes stsrting from s
 * @b:value to be filled
 * @n:number of bytes to be filled starting from s to be filled
 * @s:pointer to destination object
 * Return: zero
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
