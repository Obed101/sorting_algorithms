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
 * @size: thats the seze of the array
 * Return: parted array
 */
int partition(int arr[], int low, int high, size_t size)
{
	int j;
	int pivot = arr[high];
	int i = (low - 1);

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
			print_array(arr, size);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	print_array(arr, size);
	return (i + 1);
}

/**
 * quickSort - sorts the array
 * @arr: the array
 * @low: lower array index
 * @high: high ind
 * @size: arr size
 */
void quickSort(int arr[], int low, int high, size_t size)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now*/
		int pi = partition(arr, low, high, size);

		quickSort(arr, low, pi - 1, size);
		quickSort(arr, pi + 1, high, size);
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

		quickSort(array, 0, size - 1, size);
}
