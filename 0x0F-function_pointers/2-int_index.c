#include "function_pointers.h"
/**
* int_index - a function that searches for an integer
* @array: an array of characters
* @size: size of an array
* @cmp: a pointer to the function to be used to compare values
* Return: an int or -1 if no match found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index, y;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (index = 0; index < size; index++)
		{
			y = cmp(array[index]);
			if (y)
				break;
		}
		if (index < size)
			return (index);
	}
	return (-1);
}
