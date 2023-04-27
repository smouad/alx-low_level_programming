#include "lists.h"

/**
 * add_node - adds a node to the begining of the list
 * @head: pointer to a pointer to the head of the list
 * @str: content of new node
 * Return: a pointer to the new head of the list
*/
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;

	for (len = 0; str[len]; len++)
	;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
