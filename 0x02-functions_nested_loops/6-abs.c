#include "main.h"
/**
* _abs - returns the absolute value of an int
* @c: parameter definition
* Return: c in absolute value
*/
int _abs(int c)
{
	if (c == -c)
	{
		int a;

		a = c * (-1);
		return (a);
	}
	else
	{
		return (c);
	}
}
