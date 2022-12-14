#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * @array: array of elements
 * @size: size of array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
