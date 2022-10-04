#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates strings
 * @str: string to copy
 * Return: 0
 */

char *_strdup(char *str)
{
	int i, j;
	char *new;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{}
	new = malloc(sizeof(char) * j + 1);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		new[i] = str[i];
	}
	return (new);
}
