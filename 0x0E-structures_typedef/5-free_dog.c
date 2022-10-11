#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
* free_dog - a function that frees dog
* @d: a pointer to dog_t
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
