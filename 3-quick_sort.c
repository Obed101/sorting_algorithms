#include "sort.h"

/**
 * swap - swaps values
 * @a: first val
 * @b: second value
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 * partition - partitions the array for sorting
 * @arr: array of ints
 * @low: the lower ind
 * @high: the higher ind
 *
 * Return: parted array
 */
int partition(int arr[], int low, int high)
{
	int j;
	int pivot = arr[high];
	int i = low;
	static int size, c;

	if (!c)
	       size = high + 1; c++;
	for (j = low; j <= high; j++)
	{
		if (arr[j] < pivot)
		{
			if (i != j)
			{
				swap(&i, &j);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != right)
	{
		swap(&i, &right);
		print_array(array, size);
	}
	return (i);
}

/**
 * quickSort - sorts the array
 * @arr: the array
 * @low: lower array index
 * @high: high ind
 * @size: arr size
 */
void quickSort(int arr[], int low, int pivot)
{
	int pi;

	if (low < pivot)
	{
		/* pi is partitioning index, arr[p] is now*/
		pi = partition(arr, low, pivot);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, pivot);
	}
}

/**
 * quick_sort - sorts the array
 * @array: the array
 * @size: arr size
 */
void quick_sort(int *array, size_t size)
{
	if (size >= 2 && array)

		quickSort(array, 0, size - 1);
}
