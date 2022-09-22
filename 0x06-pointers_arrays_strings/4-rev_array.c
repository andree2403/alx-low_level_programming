#include "main.h"

/**
 * reverse_array - reverse the array
 *
 * @a: array of intergers
 * @n: number of element of the array
 *
 */

void reverse_array(int *a, int n)
{
	int i, rev;

	for (i = 0; i < n; i++)
	{
		n--;
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
