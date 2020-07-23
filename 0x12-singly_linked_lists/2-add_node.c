#include "lists.h"

/**
  * add_node - Adds a node at the beginning of a list_t list
  *
  * @head: pointer to the pointer to the head of the list
  *
  * @str: to put on the new node
  *
  * Return: address of the new element. NULL if failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *cpStr;
	int lenS;

	node = malloc(sizeof(list_t));
	cpStr = strdup(str);
	if (cpStr == NULL || node == NULL)
		return (NULL);
	node->next = *head;
	*head = node;
	node->str = cpStr;
	for (lenS = 0; cpStr[lenS] != 0; lenS++)
	{
	}
	node->len = lenS;
	return (node);
}
