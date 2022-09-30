#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}
