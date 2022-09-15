#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * Return: Always 0
 * @c: argument
 */
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c);
void print_numbers(void);
int main(void)
{
    print_numbers();
    return (0);
}

void print_numbers(void)
{
	int i = 0;

	for (i >= 0; i <= 9; i++)
	{
//		_putchar((i % 10) + '0');
	
		printf("%d", i);
	}
	printf("\n");
}
