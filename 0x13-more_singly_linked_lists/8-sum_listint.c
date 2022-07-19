#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Gets the sum of all the nodes in a linked list
 * @head: Address of the first item in the linked list
 *
 * Return: Sum of the values of all of the nodes
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (!head)
		return (0);

	for (sum = 0; head; head = head->next)
		sum += head->n;

	return (sum);
}
