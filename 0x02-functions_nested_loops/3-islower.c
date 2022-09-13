#include "main.h"
/**
 *_is lower - tests the lowest character
 *@c - to test
 *
 *Return: 1 if it is lower case, 0 if it is not lower case. 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
      		return (0);
	
}

