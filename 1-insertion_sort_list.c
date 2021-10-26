#include "sort.h"

void sortedInsert(listint_t **head_ref, listint_t *newNode)
{
	listint_t *current;
	/*if list is empty*/
	if (*head_ref == NULL)
		*head_ref = newNode;

	if ((*head_ref)->n >= newNode->n)
	{
		newNode->next = *head_ref;
		newNode->next->prev = newNode;
		*head_ref = newNode;
	}

	else {
		current = *head_ref;

		while (current->next && current->next->n < newNode->n)
			current = current->next;
		print_list(*head_ref);
		/*Make the appropriate links */
		newNode->next = current->next;

		/* if the new node not appended*/
		if (current->next != NULL)
			newNode->next->prev = newNode;
		print_list(*head_ref);

		current->next = newNode;
		newNode->prev = current;
	}
}

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *current = *list;

	while (current )
	{
		/*storing next for next iteration*/
		listint_t *nxt = current->next;
		/*remove all links to create 'current'*/
		current->prev = current->next = NULL;

		sortedInsert(&sorted, current);
		current = nxt;
	}

	*list = sorted;

}
