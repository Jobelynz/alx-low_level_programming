#include "main.h"
/**
* print_sign - prints the sign of a number
*Description: The print_sign fuction prints a number
* @n: the parameter passed
*Return: (1) if n > 0, (0) others
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
