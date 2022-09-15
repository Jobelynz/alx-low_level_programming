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
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _isdigit(int c);

int main(void)
{
    char c;

    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    c = '9';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
