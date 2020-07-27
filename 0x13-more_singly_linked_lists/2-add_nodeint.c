#include "lists.h"

/**
  * add_nodeint - add a new node at the beginning of the list
  *
  * @head: listint_t list
  * @n: int value that the node will have
  *
  * Return: address of the new element. NULL if fails
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->next = *head;
	node->n = n;
	*head = node;
	return (node);
}
