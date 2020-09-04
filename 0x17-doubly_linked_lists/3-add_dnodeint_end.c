#include "lists.h"

/**
  * add_dnodeint_end - add a node at the end of a dlistint_t list
  *
  * @head: double pointer to the head of the list
  * @n: n that the new node will have
  *
  * Return: pointer to the new node. NULL if fails
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/*Valores fijos, independiente de la sitaucion*/
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	new->prev = *head;
	while (new->prev->next)
	{
		new->prev = new->prev->next;
	}

	new->prev->next = new;

	return (new);
}
