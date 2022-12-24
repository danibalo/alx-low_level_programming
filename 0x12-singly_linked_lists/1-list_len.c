#include "lists.h"
/**
*list_len - returns number of elements in the list
*@h: the linked list list_t to be printed
*Return: number of elements in the list
*/
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
