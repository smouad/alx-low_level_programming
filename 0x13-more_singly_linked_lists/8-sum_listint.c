#include "lists.h"

/**
 * sum_listint - give the sum of elements on a list
 * @head: the head of the list
 * Return: the sum of the list
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
