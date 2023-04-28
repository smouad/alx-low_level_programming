#include "lists.h"

/**
 * free_list - free a list
 * @head: the head of the list
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
