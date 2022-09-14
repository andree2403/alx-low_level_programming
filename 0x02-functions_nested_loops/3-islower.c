#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c: Is the int that we use for this argument
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
