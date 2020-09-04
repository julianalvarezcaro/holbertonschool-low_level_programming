#include "lists.h"

/**
  * get_dnodeint_at_index - returns a pointer to the node at the given index
  *
  * @head: pointer to the head of the list
  * @index: element to get
  *
  * Return: Pointer to the node. NULL if it doesn't exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *select;
	unsigned int pos;

	if (head == NULL)
		return (NULL);
	select = head;
	for (pos = 0; pos < index; pos++)
	{
		select = select->next;
	}
	return (select);
}
