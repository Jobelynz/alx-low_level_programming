#include "main.h"
/**
* _sqrt_recursion - function that returns the natural square root of a number
*
* @n: a number
* Return: 0
*/
int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		return (_sqrt_recursion(n, 0.5));
	}
	return (0);
}
