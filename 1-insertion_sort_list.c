#include "sort.h"



void sortedInsert(listint_t **head_ref, listint_t *newNode)
{
    listint_t *current;
 
    /*if list is empty*/
    if (*head_ref == NULL)
        *head_ref = newNode;
 
    // if the node is to be inserted at the beginning
    // of the doubly linked list
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
		//print_list(*list);
	}
	
	*list = sorted;
	//print_list(*list);
}

listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
    insertion_sort_list(&list);
    printf("\n");
    print_list(list);
    return (0);
}
