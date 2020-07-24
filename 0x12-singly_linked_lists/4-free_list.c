#include "lists.h"

/**
 * free_list - frees space of a list_t
 *
 * @head: list_t to free
 */
void free_list(list_t *head)
{
	list_t *help;
	while (head)
	{
		help = head;
		head = head->next;
		free(help->str);
		free(help);
	}
}
