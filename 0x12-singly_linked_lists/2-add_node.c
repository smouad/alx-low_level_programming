#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	int len, i;
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
