#include "main.h"
#include <stdio.h>
/**
* main - prints first 50 Fibonacci numbers, starting with 1 and 2.
* Return: (0) success
*/
int main(void)
{
	unsigned long num1 = 0, num2 = 1, sum;

	int i;

	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;
		if (i == 49)
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
