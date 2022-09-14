#include "main.h"
#include <stdio.h>
/**
* main - entry point
* Return: (0) success
*/
int main(void)
{
	int num;

	unsigned long fib1 = 0, fib2 = 1, add;

	for (num = 0; num < 50; num++)
	{
		add = fib1 + fib2;
		printf("%lu", add);
		fib1 = fib2;
		fib2 = add;
		if (num == 49)
		{
			printf("\n");
		}
		else
		{
			printf(",");
		}
	}
	return (0);
}
