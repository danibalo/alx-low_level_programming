#include "lists.h"
/**
 *add_nodeint - add node at the beginning of the list
 *@head: head of the list
 *@n:content(integer) of the node in new node
 *Return : the adress of element(newly added node)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
	




