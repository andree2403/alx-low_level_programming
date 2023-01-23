#include "main.h"

/**
 * _strncat - concatenates the string
 *
 * @dest: first argument
 * @src: second argument
 * @n: desired byte
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest;
	int i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{}
	for (i = 0; i < n && src[i]; i++)
		dest[len_dest + i] = src[i];
	return (dest);
}
