#include "lists.h"

/**
  * add_dnodeint - add a node to a dlistint_t list
  *
  * @head: double pointer to the head of the list
  * @n: value that the new node will have
  *
  * Return: address of the new node. NULL if fails
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->next = *head;
	new->n = n;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	*head = new;
	return (new);
}
