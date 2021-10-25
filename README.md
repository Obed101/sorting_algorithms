<h1 align="center">SORTING ALGORITHMS AND BIG O IN C</h1>

```
void insertionSort(DoublyLinkedList * me)
{
	/* Get first node*/
	LinkNode * front = me->head;
	LinkNode * back = NULL;
	while (front != NULL)
	{
		/* Get next node*/
		back = front->next;
		/* Update node value when consecutive nodes are not sort*/
		while (back != NULL && 
               back->prev != NULL && 
               back->data < back->prev->data)
		{
			/* Modified node data*/
			swapData(back, back->prev);
			/* Visit to previous node*/
			back = back->prev;
		}
		/* Visit to next node*/
		front = front->next;
	}
}
```
Sorting algorithms are implemented in every Data Science project That exists
