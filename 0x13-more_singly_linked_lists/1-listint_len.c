#include "lists.h"

/**
  * listint_len - returns the numbers of nodes in a listint_t list
  *
  * @h: listint_t list
  *
  * Return: number of nodes
  */
size_t listint_len(const listint_t *h)
{
	listint_t *cur;
	int nodes = 0;

	if (h != NULL)
	{
		nodes++;
		cur = h->next;
		while (cur != NULL)
		{
			cur = cur->next;
			nodes++;
		}
	}
	return (nodes);
}
