#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @c: parameter
* Return: (0) success
*/
int print_last_digit(int c)
{
	int last_num = c % 10;

	if (last_num < 0)
	{
		last_num *= -1;
	}
	_putchar(last_num + '0');
	return (last_num);
}
