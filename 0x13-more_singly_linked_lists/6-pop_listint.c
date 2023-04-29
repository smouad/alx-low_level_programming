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

	tmp = (*head)->next;
	n = (*head)->n;
	*head = tmp;
	return (n);
}
