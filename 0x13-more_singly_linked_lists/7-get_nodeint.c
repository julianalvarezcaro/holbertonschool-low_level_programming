#include "lists.h"

/**
  * get_nodeint_at_index - gets the pointer at an index
  *
  * @head: pointer to the list
  * @index: index of the node to get
  *
  * Return: pointer to the node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int loop;

	if (head == NULL)
		return (NULL);
	node = head;
	for (loop = 0; loop < index; loop++)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
	}
	return (node);
}
