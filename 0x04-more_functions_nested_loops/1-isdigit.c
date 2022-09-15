#include "main.h"
/**
 * _isdigit - it checks for a digit through 0 to 9
 * @c: is the character to be tested
 * Returns 1 if it is a digit, else 0
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
