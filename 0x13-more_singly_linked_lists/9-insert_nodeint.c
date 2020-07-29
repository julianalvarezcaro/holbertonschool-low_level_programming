#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index
 *
 * @head: double pointer to the start of the list
 * @idx: index where the node must be added
 * @n: data that the node must contain
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *now, *node;

	if (head == NULL)
		return (NULL);
	if (*head == NULL) /*Para listas vacias*/
	{
		if (idx == 0)
		{
			node = malloc(sizeof(listint_t));
			if (node == NULL)
				return (NULL);
			node->n = n;
			node->next = NULL;
			*head = node; /*Linea clave de la condicion*/
			return (node);
		}
		else
			return (NULL);
	}
	now = gotonow(*head, idx);
	if (now == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = now->next;
		now->next = node;
	}
	return (node);
}
/**
 * gotonow - Sets a pointer to the index. No funciona para listas vacias
 *
 * @head: pointer that must be adjusted
 * @idx: index that we are looking for
 *
 * Return: pointer to the node at the index
 */
listint_t *gotonow(listint_t *head, int idx)
{
	listint_t *actual;
	int loop;

	actual = head;
	for (loop = 0; loop < (idx - 1); loop++)
	{
		if (actual == NULL)
			return (NULL);
		actual = actual->next;
	}
	printf("Ahora apunta a n: %d\n", actual->n);
	return (actual);
}
