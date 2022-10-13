#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - indexes aray i think
 * @array: array to go through
 * @size: size of array
 * @cmp: function to do something with size
 * Return: int value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		int i;

		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
