#include "main.h"
/*
 * rot13 - encodes a string using rot13.
 * Return: Success
 */
char *rot13(char *s)
{
	int i = 0, j;
	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char B[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while(s[i])
	{
		for (j = 0; A[j]; j++)
		{
			if (s[i] == A[j])
			{
				s[i] = B[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
