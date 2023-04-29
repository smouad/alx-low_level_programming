#include "lists.h"

/**
 * pop_listint - pop the head of a list
 * @head: a pointer to the list head
 * Return: the value of the content of that node
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = (*head)->next;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
