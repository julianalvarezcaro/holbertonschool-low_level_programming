#include "lists.h"

/**
  * list_len - gives the number of elements in the list
  *
  * @h: list_t list
  *
  * Return: number of elements in the list
  */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + list_len(h->next));
}
