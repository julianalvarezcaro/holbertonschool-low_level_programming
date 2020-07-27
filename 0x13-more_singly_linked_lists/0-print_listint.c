#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t
 *
 * @h: listint_t list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *cur;
	int nodes = 0;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		cur = h->next;
		while (cur != NULL)
		{
			printf("%d\n", cur->n);
			nodes++;
			cur = cur->next;
		}
	}
	else
		printf("\n");
	return (nodes);
}
