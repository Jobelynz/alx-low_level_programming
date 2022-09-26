#include "main.h"
/**
* _strpbrk - a function that searches a string for any of a set of bytes
*
* @s: The string to be scanned
*
* @accept: substring to be matched
*
* Return: a pointer to the byte in s that matches in accept or NULL else
*/
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[j])
			{
				break;
			}
		}
		if (accept[j])
		{
			return (s + x);
		}
	}
	return (0);
}
