#include "main.h"
#include <stdio.h>
/**
* main - prints first 50 Fibonacci numbers, starting with 1 and 2.
* Return: (0) success
*/
int main(void)
{
	long num1 = 1, num2 = 2;

	int i = 0;

	while (i == 0)
	{
		if (i == 0)
		{
			printf("%ld", num1);
		}
		else if (i == 1)
		{
			printf(", %ld", num2);
		}
		else
		{
			num2 += num1;
			num1 = num2 - num1;
			printf(", %ld", num2);
		}
		++i;
	}
	printf("\n");
	return (0);
}
