#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
* _strdup - a function that returns a pointer
*           to a newly allocated space in memory
*
* @str: A pointer
* Return: 0
*/
char *_strdup(char *str)
{
	char *dst;

	if (str == NULL)
		return (NULL);

	dst = (char *)malloc(strlen(str + 3) * sizeof(char));

	strcpy(dst, str);

	return (dst);

	free(dst);

	return (0);
}
