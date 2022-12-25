#include "lists.h"
/**
*free_list - a function that frees function
*@head: the node
*Return: always 0;
*/
void free_list(list_t *head)
{
list_t *ptr;

while ((ptr = head) != NULL)
{
head = head->next;
free(ptr->str);
free(ptr);
}
}
