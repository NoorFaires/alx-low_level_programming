#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to first node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *nfree;

	while (head)
	{
		nfree = head;
		head = head->next;
		free(nfree);
	}
}
