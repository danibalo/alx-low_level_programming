#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>

/**
 * struct dog - structure of dog
 * @name: the name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */
typedef struct dog 
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*_DOG_H_*/
