#include "lists.h"

/**
 * add_dnodeint - function that add a new node.
 * @head: header
 * @n: data
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (*head == NULL)
		return NULL;
	if (head == NULL)
		return NULL;
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
