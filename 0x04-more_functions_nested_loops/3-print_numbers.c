#include "main.h"

/**
 * print_numbers - function that print all numbers
 * _putchar: prints the result
 * Return: 0
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}