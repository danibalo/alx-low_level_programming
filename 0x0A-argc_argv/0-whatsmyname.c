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
	printf("%s\n", *argv[0]);
	return (0);
}
