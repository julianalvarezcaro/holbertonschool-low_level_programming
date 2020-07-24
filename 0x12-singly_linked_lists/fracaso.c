#include "lists.h"

/**
  * add_node_end - Adds a node at the end of the list
  *
  * @head: head of the list
  * @str: string for the new node to have
  *
  * Return: Address of the new node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	char *cpStr;
	int lenS;

	node = malloc(sizeof(list_t));
	if (*head != NULL)
	{
		printf("Lo que sea :'v\n");
		node = (*head)->next;
		return (add_node_end(&node, str));
	}
	printf("Llego despues de recorsion\n");
	cpStr = strdup(str);
	if(cpStr == NULL || node == NULL)
	{
		free(node);
		free(cpStr);
		return (NULL);
	}
	for (lenS = 0; str[lenS] != '\0'; lenS++)
	{
	}
	node->next = NULL;
	*head = node;
	node->str = cpStr;
	node->len = lenS;
	return (node);
}
