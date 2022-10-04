#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* str_concat - a function that concatenates two strings.
* @s1: first string
* @s2: second string to be added to first
* Return: a newly allocated memory of s1 and s2 or NULL, if failed.
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	int x1, y2, z, i, j;

	x1 = strlen(s1);

	y2 = strlen(s2);

	z = (x1 + y2 + 1);

	ptr = malloc(z);

	for (i = 0; i < x1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < y2; j++)
	{
		ptr[j + x1] = s2[j];
	}
	ptr[z - 1] = '\0';

	return (ptr);

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";
	if (!ptr)
		return (NULL);

}
