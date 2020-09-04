#include "lists.h"

/**
  * dlistint_len - gets the number of elements of a dlistint_t list
  *
  * @h: head of the list
  *
  * Return: number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node;
	int nelem = 0;

	node = h;
	while (node)
	{
		nelem++;
		node = node->next;
	}
	return (nelem);
}
