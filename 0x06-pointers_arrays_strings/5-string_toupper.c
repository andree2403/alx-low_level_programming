#include "main.h"

/**
 * string_toupper - changes all the lowercase letters of a string to uppercase
 *
 * @a: string
 *
 * Return: char value
 */

char *string_toupper(char *a)
{
	int i, delt = 'a' - 'A';

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= delt;
	}
	return (a);
}
