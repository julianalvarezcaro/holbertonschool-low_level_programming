#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a node at a given index
  *
  * @head: double pointer to the start of the list
  * @idx: index where the node must be added
  * @n: data that the node must contain
  *
  * Return: pointer to the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *now;
	listint_t *next;
	listint_t *node;
	unsigned int loop;

	if (head == NULL || (*head == NULL && idx != 0))
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	now = *head;
	next = NULL;
	for (loop = 0; loop < idx - 1; loop++)
	{
		if (now == NULL)
		{
			free(node);
			return (NULL);
		}
		now = now->next;
		next = now->next;
	}
	node->n = n;
	node->next = next;
	if (idx == 0)
		*head = node;
	else
		now->next = node;
	return (node);
}
