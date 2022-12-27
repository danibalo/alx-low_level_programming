#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	/*int i;*/

	if (*head == NULL)
		return (0);
	else
	{
		temp = *head;
		*head = (*head)->next;
		/*i = temp->n;*/
		/*free(temp);*/
	}
	return (temp->n);
	free(temp);
}
