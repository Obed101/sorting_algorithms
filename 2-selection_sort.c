#include "sort.h"


/**
 * selection_sort - a function that sorts an array
 *
 * @array: the array to be sorted
 * @size: size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i,j;
	for(i = 0; i < size-1; i++)
	{
		size_t min = i;
		for(j = i+1; j < size; j++)
		{
			if(array[j] < array[min])
			{
				size_t min = j;
			}
		}
		if(min != j)
	  {
		  /*swap*/
		  int temp = array[j];
		  array[j] = array[j+1];
		  array[j+1] = temp;
	  }
    }
}
