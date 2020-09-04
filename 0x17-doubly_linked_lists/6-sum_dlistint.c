#include "lists.h"

/**
  * sum_dlistint - sums all the elements of the list
  *
  * @head: pointer to the first node of the list
  *
  * Return: The result of the sum
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
