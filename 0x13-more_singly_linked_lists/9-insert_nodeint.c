#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node in a index of a list
 * @head: a pointer to the head of the list
 * @idx: index where to insert
 * @n: content of the node
 * Return: a pointer to the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new || !*head)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == idx - 1)
	{
		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}
	else
		return (NULL);
}
