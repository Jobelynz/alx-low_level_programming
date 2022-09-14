#include "main.h"
#include <stdio.h>
/**
* main - prints first 50 Fibonacci numbers, starting with 1 and 2.
* Return: (0) success
*/
int main(void)
{
	long num1 = 1, num2 = 2;

	int i;

	for (i = 0; i < 25; i++)
	{
		if (i == 24)
		{
			printf("%li, %li", num1, num2);
			continue;
		}
		printf("%li, %li ", num1, num2);
		num1 += num2;
		num2 += num1;
	}
	printf("\n");
	return (0);
}
