#include "lists.h"

/**
  * free_listint - frees the space allocated for a list
  *
  * @head: listint_t list
  *
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *each = head;
	listint_t *foll;

	while (each != NULL)
	{
		foll = each->next;
		free(each);
		each = foll;
	}
}
