#include "lists.h"

/**
 * free_listint - free a list of ints
 * @head: head of the list
*/
void free_listint(listint_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
