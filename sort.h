#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

void print_array(const int *array, size_t size);
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

/* DATA STRUCTURES */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;



#endif
