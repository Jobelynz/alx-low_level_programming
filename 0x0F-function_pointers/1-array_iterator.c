#include "function_pointers.h"
/**
* array_iterator - a function that executes a function
* given as a parameter on each element of an array.
*
* @array: an array
* @size: size of array
* @action: pointer to the function needed
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (action != NULL && array != NULL)
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
}
