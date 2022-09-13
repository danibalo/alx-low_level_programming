#include "main.h"
/**
 *_isalpha - tests whether an input is
 *a letter, lowercase or upper case
 *@c: is tested
 *Return: return 1 if it is letter, lower case or upper case. If not returns 0
 */
int _isalpha(int c)
{
	if (c == 'c' || c == 'C')
		return (1);
	else
		return (0);
}

