#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * Return: Always 0
 * @c: argument
 */
int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		if (c == 'A')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
