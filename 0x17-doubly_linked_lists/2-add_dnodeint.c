#include "lists.h"

/**
 * add_dnodeint - adds a new node at
 * the beginning of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	return (new_node);
}
