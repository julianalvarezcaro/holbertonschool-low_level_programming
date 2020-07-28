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
	listint_t *each;

	if (head == NULL || *head == NULL)
		return;
	each = *head;
	while (each != NULL)
	{
		foll = each->next;
		free(each);
		each = foll;
	}
	foll = NULL;
	*head = NULL;
}
