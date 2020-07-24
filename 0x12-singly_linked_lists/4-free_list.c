#include "lists.h"

/**
  * free_list - frees space of a list_t
  *
  * @head: list_t to free
  */
void free_list(list_t *head)
{
	if (head->next != NULL)
	{
		free_list(head->next);
	}
	free(head->str);
	free(head);
}
