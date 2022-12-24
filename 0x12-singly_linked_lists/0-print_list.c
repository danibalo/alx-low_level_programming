#include "lists.h"
/**
*print_list - prints number of nodes
*@h: pointer points to nodes
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t n_nodes;

	n_nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
