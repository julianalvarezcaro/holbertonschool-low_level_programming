#include "lists.h"

/**
  * sum_listint - Sums the n attribute of every node
  *
  * @head: pointer to the list
  *
  * Return: the sum of all the data
  */
int sum_listint(listint_t *head)
{
	listint_t *each;
	int sum;

	if (head == NULL)
		return (0);
	each = head;
	sum = 0;
	while (each != NULL)
	{
		sum += each->n;
		each = each->next;
	}
	return (sum);
}
