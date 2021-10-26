#include "sort.h"
#define RANGE 255
#include <string.h>

void counting_sort(int *array, size_t size);

void counting_sort(int *array, size_t size)
{
	int out[size], i, count[RANGE + 1];
	size = sizeof(array) / sizeof(array[0]);
	
	memset(count, 0, sizeof(count));
	for (i = 0; array[i]; ++i)
	++count[array[i]];
	
	for (i = 1; i <= RANGE; ++i)
	count[i] += count[i - 1];
	
	for (i = 0; array[i], ++i;)
	{
		out[count[array[i]] - 1] = array[i];
		--count[array[i]];
	}
	
	for (i = 0; array[i]; ++i)
	array[i] = out[i];
	print_array(array, size);
}
