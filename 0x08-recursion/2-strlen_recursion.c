#include "main.h"
/**
* _strlen_recursion -  a function that returns the length of a string.
* @s: a string
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
