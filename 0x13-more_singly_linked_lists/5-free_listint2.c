#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: address of pointer to first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *nfree, *temp;

	if (!head)
		return;

	nfree = *head;
	while (nfree)
	{
		temp = nfree;
		nfree = nfree->next;
		free(temp);
	}
	*head = NULL;
}
