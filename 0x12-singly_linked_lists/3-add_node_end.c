#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node, *ptr;
	size_t i;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
		return (NULL);
	i = 0;
	last_node->str = strdup(str);
	while (str[i])
		i++;
	last_node->len = i;
	last_node->next = NULL;
	ptr = *head;
	if (ptr == NULL)
	{
		*head = last_node;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = last_node;

	}
	return (*head);

}
