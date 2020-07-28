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

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	now = *head;
	next = NULL;
	for (loop = 0; loop < idx; loop++)
	{
		if (now == NULL && idx != 0)
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
/*
   *listint_t *gotonow(listint_t now, unsigned int idx)
* {
*listint_t *actual;
*unsigned int loop;
*
*for(loop = 0; loop < idx - 1; loop++)
*{
*
*}
*}
*/
