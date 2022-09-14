#include "main.h"
#include <stdio.h>
/**
* main - entry program
* Return: (0) success
*/
int main(void)
{
	int c;

	unsigned long f1 = 0, f2 = 1, add;

	unsigned long f1_h1, f1_h2, f2_h1, f2_h2;

	unsigned long h1, h2;

	for (c = 0; c < 92; c++)
	{
		add = f1 + f2;
		printf("%lu, ", add);
		f1 = f2;
		f2 = add;
	}
	f1_h1 = f1 / 10000000000;
	f2_h1 = f2 / 10000000000;
	f1_h2 = f1 % 10000000000;
	f2_h2 = f2 % 10000000000;
	for (c = 93; c < 99; c++)
	{
		h1 = f1_h1 + f2_h1;
		h2 = f1_h2 + f2_h2;
		if (f1_h2 + f2_h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (c != 98)
		{
			printf(",");
		}
		f1_h1 = f2_h1;
		f1_h2 = f2_h2;
		f2_h1 = h1;
		f2_h2 = h2;
	}
	printf("\n");
	return (0);
}
