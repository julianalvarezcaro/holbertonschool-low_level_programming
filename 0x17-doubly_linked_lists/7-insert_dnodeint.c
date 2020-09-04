#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a node at a given index
  *
  * @h: double pointer to the first element of the list
  * @idx: index at which the element must be added
  * @n: int that the new node must have
  *
  * Return: Pointer to the new node. NULL if fails
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos;
	dlistint_t *prev, *new;

	if (h == NULL)
		return (NULL);
	/* Same as adding at the beginning of the list */
	if (idx == 0)
		return (add_dnodeint_end(h, n));
	/* idx was not zero, so if list is empty won't be possible to add*/
	if (*h == NULL)
		return (NULL);
	prev = *h;
	for (pos = 0; pos < idx - 1; pos++)
	{
		if (prev == NULL)
		{
			/* Means that idx is bigger than the list*/
			return (NULL);
		}
		prev = prev->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = prev;
	new->next = prev->next;
	prev->next->prev = new;
	prev->next = new;
	return (new);
}
