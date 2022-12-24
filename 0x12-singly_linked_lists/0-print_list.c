#include "lists.h"
/**
*print_list - prints number of nodes
*@h: pointer points to nodes
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count_nodes;

	count_nodes = 0;
	while (h != NULL)
	{
		count_nodes++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count_nodes);
}
