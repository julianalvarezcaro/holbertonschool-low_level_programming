#include "lists.h"

/**
  * free_listint2 - frees a listint_t list and sets the head to null
  *
  * @head: pointer to the pointer that points to the start of the list
  *
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *foll;
	listint_t *each = *head;

	if (head == NULL)
		return;
	while (each != NULL)
	{
		foll = each->next;
		free(each);
		each = foll;
	}
	*head = NULL;
}
