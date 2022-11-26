#include "main.h"
/**
 * _strlen - prints lenght of string
 * @s: string to be length calculated
 * Retur: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
