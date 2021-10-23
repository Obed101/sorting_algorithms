#include "sort.h"


/**
 * bubble_sort - a function that sorts an array
 *
 * @array: the array to be sorted
 * @size: size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	int i, j;

	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size - i - 1; j++)
		{
			if(array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
