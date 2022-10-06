#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concates two strings
 * @s1: string one
 * @s2: second string
 * @n: n amount of bytes
 * Return: char value
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	new = malloc(sizeof(char) * n + strlen(s1) + 1);
	if (new == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new[i] = s1[i];
	if (n >= strlen(s2))
	{
		for (j = 0; s2[j] != '\0'; j++)
			new[i + j] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++)
			new[i + j] = s2[j];
	}
	new[i + j] = '\0';
	return (new);
}
