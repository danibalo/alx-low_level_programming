#include "main.h"
/**
 * _strlen - prints length of string
 * @s1:string to be tested
 * Return: zero
 */
int _strlen(char *s1)
{
	int n;

	for (n = 0; s1[n] != '\0'; n++)
	{

	}
	return (n);
}

/**
*str_concat - concatenates two strings
*@s1:destination string
*@s2:source string
*Return:zero
*/
char *str_concat(char *s1, char *s2)
{
	int s1_len = 0;
	int i;
	int size;
	char *p;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);

	while (s1[s1_len])
	{
		s1_len++;
	}
	for (i = 0; i != '\0'; i++)
	{
		s1[s1_len] = s2[i];
		s1_len++;
	}
	s1[s1_len] = '\0';
	return (s1);

	size = _strlen(s1) + 1;
	p = malloc(size * sizeof(char));
	if (p == 0)
	{
		return (NULL);
	}
	return (p);
}



