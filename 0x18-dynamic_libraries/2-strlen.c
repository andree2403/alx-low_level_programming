#include "main.h"

/**
 * _strlen - function that is used
 * @s: integer to be used
 *
 * Return: strlen
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len)  != '\0')
		len++;

	return (len);
}
