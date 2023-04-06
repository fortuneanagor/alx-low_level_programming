#include "lists.h"


/**
 * add_nodeint - add a new node at the starting point
 * of a linked list
 * @head: head pointer of the list
 * @n: the nth element
 *
 * Return: address of the new element, and it will be NUll if it failed.
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
