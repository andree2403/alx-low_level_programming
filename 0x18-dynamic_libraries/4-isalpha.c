#include "main.h"
/**
 * _isalpha - function to check if c is a letter, a lower case or uppercase
 * @c: is the int that we will use in the argument
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
