#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the beginning of list
 * @head: double pointer to head of node
 * @n: node data
 * Return: a new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tp;

	if (head == NULL)
		return NULL;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	new->n = n;
	new->next = NULL;
	tp = *head;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	while (tp->next != NULL)
		tp = tp->next;
	tp->next = new;
	new->prev = tp;
	return (new);
}
