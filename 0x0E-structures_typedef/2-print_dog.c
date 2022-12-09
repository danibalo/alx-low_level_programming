#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * print_dog - Prints all the data of a dog
  * @d: A dog structure
  *
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %s(nil)\n",d->name);
		else
			printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("Age: %f(nil)\n", d->age);
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: %s(nil)\n", d->owner);
		else
			printf("Owner: %s\n", d->owner);
	}
}
