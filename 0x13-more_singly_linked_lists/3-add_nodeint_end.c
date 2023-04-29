#include "lists.h"

/**
 * add_nodeint_end - add node at the end of list
 * @head: the head of list
 * @n: the content of the new node
 * Return: a pointer to te head of the list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	return (*head);
}
