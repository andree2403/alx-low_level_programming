#include "lists.h"

/**
 * add_dnodeint - function that add a new node.
 * @head: header
 * @n: data
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	
	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_s));
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	temp->next = head;
	head->prev = temp;
	return (head);
}
