#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes a node at a given index
  *
  * @head: double pointer to the beginning of the list
  * @index: index at which the node must be deleted
  *
  * Return: 1 if success. -1 otherwise
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *gone;
	unsigned int pos;

	if (head == NULL || *head == NULL)
		return (-1);
	gone = *head;
	for (pos = 0; pos < index - 1; pos++)
	{
		if (gone == NULL)
			return (-1);
		gone = gone->next;
	}
	gone->prev->next = gone->next;
	gone->next->prev = gone->prev;
	free(gone);
	return (1);
}
