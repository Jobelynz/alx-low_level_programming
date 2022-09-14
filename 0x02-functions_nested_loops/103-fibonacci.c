#include "main.h"
#include <stdio.h>
/**
*main - entry point
*Return: (0) success
*/
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibadd;

	float total_add;

	while (1)
	{
		fibadd = fib1 + fib2;
		if (fibadd > 4000000)
		{
			break;
		}
		if ((fibadd % 2) == 0)
		{
			total_add += fibadd;
		}
		fib1 = fib2;
		fib2 = fibadd;
	}
	printf("%.0f\n", total_add);
	return (0);
}
