#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char c;

	c = 'z';
	do {
		putchar(c);
		c--;
	} while (c >= 'a');
	putchar('\n');
	return (0);
}
