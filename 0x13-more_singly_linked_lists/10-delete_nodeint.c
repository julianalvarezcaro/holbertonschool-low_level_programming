#include "lists.h"

/**
  * delete_nodeint_at_index - deletes a node from the list
  *
  * @head: double pointer to the list
  * @index: index to node to be deleted
  *
  * Return: 1 if usccessfull. -1 otherwise
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *prev;
	unsigned int loop;

	if (head == NULL || *head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	prev = NULL;
	for (loop = 0; loop < index; loop++)
	{
		if (node == NULL)
			return (-1);
		prev = node;
		node = node->next;
	}
	prev->next = node->next;
	free(node);
	return (1);
}
