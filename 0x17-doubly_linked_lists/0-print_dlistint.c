#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.\
 * @h: header
 * Return: returns the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		print("%d\n", h->n)
		h = h->next;
		i++;
	}
	return (i);
}
