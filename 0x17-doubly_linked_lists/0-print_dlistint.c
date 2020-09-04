#include "lists.h"

/**
  * print_dlistint - prints all the elements of a dlistint_t list
  *
  * @h: dlistint_t list's head
  *
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node;
	int elements = 0;

	node = h;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		elements++;
	}
	return (elements);
}
