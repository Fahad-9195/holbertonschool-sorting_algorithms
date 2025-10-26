#include "sort.h"

/**
 * bubble_sort - Sort an int array ascending using Bubble sort
 * @array: pointer to array
 * @size: number of elements
 */
void bubble_sort(int *array, size_t size)
{
	int tmp, swapped;
	size_t end, i;

	if (!array || size < 2)
		return;

	for (end = size; end > 1; end--)
	{
		swapped = 0;
		for (i = 0; i + 1 < end; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (!swapped)
			break;
	}
}

