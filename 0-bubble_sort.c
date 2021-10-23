#include "sort.h"


void bubble_sort(int *array, size_t size);
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
			}
		}
	}
}

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
