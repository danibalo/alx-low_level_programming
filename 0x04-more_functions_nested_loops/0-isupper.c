#include "main.h"

/**
 *_isupper() - cheks for upper case character
 *@c: character to be tested
 *Return: returns 1 if it is upper case, else returns 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
