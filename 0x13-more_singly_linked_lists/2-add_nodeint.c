#include "lists.h"

/**
 * add_nodeint - add a node with @n as content
 * at the begining of the list and return pointer to the list
 * @head: head of the list
 * @n: content of new node
 * Return: a ponter to the new list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
