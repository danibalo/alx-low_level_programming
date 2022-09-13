#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 * Return:0
 */

void print_alphabet(void)
{

	
	for (int c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	print_alphabet ();
}

