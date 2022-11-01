#include "main.h"
/**
 * _islower - tests whether a character is
 * a lower case of English alphabet
 * @c: character to test
 * Return: 1 if it is lower case letter, 0 if it is not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

