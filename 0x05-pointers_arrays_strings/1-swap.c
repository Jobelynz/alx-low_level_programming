#include "main.h"
/**
* swap_int - swaps the values of two integers.
* @a: first pointer a
* @b: second pointer b
* Return: 0 always
*/
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
