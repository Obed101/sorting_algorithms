#include "sort.h"

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}

int partition(int arr[], int low, int high, size_t size) 
{ 	int j;
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

void quickSort(int arr[], int low, int high, size_t size)
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
        at right place */
        int pi = partition(arr, low, high, size);

        quickSort(arr, low, pi - 1, size);
        quickSort(arr, pi + 1, high, size);
    } 
}

void quick_sort(int *array, size_t size)
{
	if (size >= 2 && array)
	
	quickSort(array, 0, size - 1, size);
}


int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
