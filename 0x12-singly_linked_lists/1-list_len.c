#include "lists.h"

/**
 * list_len - function gives the size of a list
 * @h: head of the list
 * Return: the list size
*/

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
