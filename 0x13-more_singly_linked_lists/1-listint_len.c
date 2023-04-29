#include "lists.h"

/**
 * listint_len - length of a list of ints
 * @h: head of the list
 * Return: size of the list
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	i++;
}
