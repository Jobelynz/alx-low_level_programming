#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
* print_numbers - a function that prints numbers, followed by a new line.
* @separator: tring to be printed between numbers
* @n: the number of integers passed
* @...: an ellipse
* Return: numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int index;

	int numbers;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		numbers = va_arg(ap, int);

		printf("%d", numbers);

		if (index < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
