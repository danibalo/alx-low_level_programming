#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end of list
 * @head: head pointer to the list
 * @n: content of the node in the list
 * Return : Adress of last node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node, *ptr;
	last_node = malloc(sizeof(listint_t));

	if (last_node != NULL)
	{
		last_node->n = n;
		last_node->next = NULL;
	}
	else
		return (NULL);
	if (*head == NULL)
		*head = last_node;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = last_node;
	}
	return (last_node);
}
