#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n  element in arrays
 * @a: array
 * @n: number of element
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	_putchar(10);
}
