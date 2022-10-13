#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all -  a function that returns the
* sum of all its parameters.
* @n: number of parameters passed
* @...: An ellipse
* Return: 0 if n  == 0 else sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int index, sum;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);

	return (sum);
}
