#include "main.h"
/**
 *_isalpha - tests whether an input is
 *a letter, lowercase or upper case
 *@c: is tested
 *Return: return 1 if it is letter, lower case or upper case. If not returns 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

