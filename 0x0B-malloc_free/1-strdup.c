#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
* _strdup - a function that returns a pointer to a newly allocated space in memory
* 			which contains a copy of the string given as a parameter.
* @str: A pointer
* Return: 0
*/
char *_strdup(char *str)
{
	char *dst;

	if (str == NULL)
		return (NULL);

	dst = (char *)malloc(strlen(str + 1) * sizeof(char));

	strcpy(dst, str);

	return (dst);

	return (0);
}
