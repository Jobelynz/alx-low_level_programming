#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* malloc_checked - a function that allocates memory using malloc.
* @b: an integer
* Return: ptr
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(unsigned int) * b);

	if (ptr != NULL)
		return (ptr);

	exit(98);
}
