#include "sort.h"

void sortedInsert(listint_t **head_ref, listint_t *newNode)
{

	listint_t *current;
	/*if list is empty*/

    if (*head_ref == NULL)
        *head_ref = newNode;
    else if ((*head_ref)->n >= newNode->n)
{
        newNode->next = *head_ref;
        newNode->next->prev = newNode;
        *head_ref = newNode;
}
    else {
        current = *head_ref;
        while (current->next && current->next->n < newNode->n)
            current = current->next;
        newNode->next = current->next;
        if (current->next != NULL)
            newNode->next->prev = newNode;
        current->next = newNode;
        newNode->prev = current;
    }
}

void insertion_sort_list(listint_t **list)
{
	listint_t *nxt, *sorted;
	if (list)
	{
		sorted = NULL;
		listint_t *current = *list;

		while (current )
		{
			/*storing next for next iteration*/
			nxt = current->next;
			/*remove all links to create 'current'*/
			current->prev = current->next = NULL;
			sortedInsert(&sorted, current);
			current = nxt;
		}
		sortedInsert(&sorted, current);
		current = nxt;
		print_list(*list);
	}
	*list = sorted;
}
