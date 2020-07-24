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
	list_t *end;
	char *cpStr;
	int lenS;
	list_t *node;

	end = malloc(sizeof(list_t));
	end = *head;
	if (*head != NULL)
	{
		while (end->next != NULL)
		{
			end = end->next;
		}
		/*Just copied to check*/
		node = malloc(sizeof(list_t));
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
		end->next = node;
		node->str = cpStr;
		node->len = lenS;
		return (node);
	}
	else
	{
		node = malloc(sizeof(list_t));
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
}
