#include "lists.h"

/**
 * add_dnodeint - function that add a new node.
 * @head: header
 * @n: data
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	*head = malloc(sizeof(struct dlistint_s));
	*head->n = n;
	*head->next = NULL;
	*head->prev = NULL;
	*head->next = head;
	head->prev = *head;
	return (head);
}
