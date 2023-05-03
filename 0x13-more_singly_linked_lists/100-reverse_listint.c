#include "lists.h"

/**
 * reverse_listint - reverse a list of ints
 * @head: a pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1 = NULL, *tmp2 = NULL;

	while (*head)
	{
		tmp2 = (*head)->next;
		(*head)->next = tmp1;
		tmp1 = *head;
		*head = tmp2;
	}
	*head = tmp1;
	return (*head);
}
