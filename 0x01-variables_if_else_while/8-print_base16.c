#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	unsigned char c = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(c);
		c++;
	}

	c = '1';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + c);
		c++;
	}
	putchar('\n');
	return (0);
}
