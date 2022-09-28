#include "main.h"
/**
 *is_palindrome - returns 1 if string is empty, 0 if not
 *@s:string to be tested
 *Return:Success
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (0);
	return (is_palindrome(s));
}

