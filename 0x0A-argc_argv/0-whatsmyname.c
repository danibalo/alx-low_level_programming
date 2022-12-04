#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name
 * @argc:number of command line
 * @argv:string of arguments
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n",argv[i]);
	}
	return 0;
}
