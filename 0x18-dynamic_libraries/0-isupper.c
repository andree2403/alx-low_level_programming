#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c: character to be checked
 * Return: if it is return 1, 0 if otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
