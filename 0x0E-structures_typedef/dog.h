#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
* struct dog - the struct identifier
* @name: the name
* @age: age
* @owner: owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
