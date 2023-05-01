#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given index
 * @head: address of pointer to first node
 * @idx: index to insert new node
 * @n: n value of new node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *node = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = node;
		*head = new;
		return (new);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (node == NULL || node->next == NULL)
			return (NULL);
		node = node->next;
	}
	new->next = node->next;
	node->next = new;
	return (new);
}
