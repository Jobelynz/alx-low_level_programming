#include "main.h"
/**
* _strncpy - a function that copies a string.
* @dest: destination string
* @src: source string
* @n: number of chars to be copied from src
*/
char *_strncpy(char *dest, char *src, int n)
{
	int len, j;

	len = 0;
	j = 0;
	while (src[len])
	{
		len++;
	}
	while (j < n && src[j])
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
