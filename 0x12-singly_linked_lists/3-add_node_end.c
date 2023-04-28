#include "lists.h"

/**
 * add_node_end - add a node at the end of a list
 * @head: the head of the list
 * @str: content of the node
 * Return: a pointer to the head
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
	;
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->len = len;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	return (*head);
}
