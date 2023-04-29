#include "lists.h"

/**
 * get_nodeint_at_index - get the node at the @index
 * @index: the index of the mode
 * @head: the head of the list
 * Return: the node at the index or NULL if non
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head && index > x)
	{
		head = head->next;
		x++;
	}
	return (head);
}
