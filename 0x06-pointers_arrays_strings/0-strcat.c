#include "main.h"

/**
 * _strcat - concatenates variables
 * @dest: pointer
 * @src: pointer
 *
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{
	int len_dest;
	int i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{}
	for (i = 0; src[i] != '\0'; i++)
		dest[len_dest + 1] = src[i];
	return (dest);
}
