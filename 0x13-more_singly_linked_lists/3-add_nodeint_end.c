#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 *
 * @head: listint_t list
 * @n: int to be the n attribute of new node
 *
 * Return: address of the new node or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *end;

	if (head == NULL)
		return (NULL);
	end = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		end = gotoend(end);
		end->next = node;
	}
	return (node);
}

/**
  * gotoend - will make the pointer point to the last element of the list
  *
  * @end: pointer to the elements of the array
  *
  * Return: void
  */
listint_t *gotoend(listint_t *end)
{
	while (end->next != NULL)
		end = end->next;
	return (end);
}
