#include "lists.h"

/**
 * list_len - determines the number of elements in a linkedlist.
 * @h: pointer to  the list
 * Return: the size of the list.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
