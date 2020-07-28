#include "lists.h"

/**
  * pop_listint - Deletes the first node of the list
  *
  * @head: pointer to the pointer to the first element of the lsit
  *
  * Return: the n of the deleted node
  */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int nVal;

	if(head == NULL || *head == NULL)
		return (0);
	first = *head;
	*head = (*head)->next;
	nVal = first->n;
	free(first);
	return (nVal);
}	
