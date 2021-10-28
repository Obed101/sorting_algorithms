#include "sort.h"
/**
 * shell_sort - a function that uses the shell sort algo to sort
 * @array: the array of items to sort
 * @size: sizeof the array
 */
void shell_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}
	int i, j, k, inc;

	inc = 1;

	while (inc <= (size - 1) / 9)
		inc = 3 * inc + 1;
	while (inc >= 1)
	{
		for (i = inc; i < size; i++)
		{
			k = array[i];
			for (j = i - inc; j >= 0 && k < array[j]; j = j - inc)
				array[j + inc] = k;
			print_array(array, size);
		}
		inc /= 3;
	}
}
