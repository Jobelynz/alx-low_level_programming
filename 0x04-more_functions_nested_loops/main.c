#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * Return: Always 0
 * @c: argument
 */
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c);

int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
int _isupper(int c)
{
	for (c >= 'A'; c <= 'Z'; c++)
	{
		return (1);
	}
	return (0);
}
