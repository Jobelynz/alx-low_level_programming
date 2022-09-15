#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * Return: Always 0
 * @c: argument
 */
#include <stdio.h>
int mul(int a, int b);
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}

#include "main.h"
/**
* mul - multiplies two integers
* @a: first argument
* @b: second argument
* Return: 0 Always
*/
int mul(int a, int b)
{
	return (a * b);
}
