#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: yhe head of the list
 * Return: elements on the list
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
