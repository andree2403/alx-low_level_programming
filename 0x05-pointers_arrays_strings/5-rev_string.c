#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - prints string in reverse
 *
 * @s: string parameter
 *
 */

void rev_string(char *s)
{
	char n;
	int i;

	i = 0;
	while (i < _strlen(s) / 2)
	{
		n = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = n;
		i++;
	}
}
