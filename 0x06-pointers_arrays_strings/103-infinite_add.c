#include "main.h"
/**
* infinite_add - a function that adds two numbers
* @n1: first number
* @n2: second number
* @r: buffer that the function will use to store the result
* @size_r: buffer size
* Return: 0
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int byte, index;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);
		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				printf("  ");
			else
				printf("%02x", *(b + index + byte));
			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}
		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				break;
			else if (*(b + index + byte) >= 31 &&
				 *(b + index + byte) <= 126)
				printf("%c", *(b + index + byte));
			else
				printf(".");
		}
		if (byte >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
