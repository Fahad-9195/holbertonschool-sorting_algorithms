#include "sort.h"

/**
 * swap_ints - swaps two integers in an array
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
static void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - partitions the array using the Lomuto scheme
 * @array: the array to partition
 * @low: starting index
 * @high: ending index
 * @size: total size of the array (for printing)
 *
 * Return: the final pivot index
 */
static int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap_ints(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		swap_ints(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quicksort_recursive - recursively applies the Quick sort algorithm
 * @array: the array to sort
 * @low: starting index
 * @high: ending index
 * @size: total size of the array
 */
static void quicksort_recursive(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = lomuto_partition(array, low, high, size);
		quicksort_recursive(array, low, pivot_index - 1, size);
		quicksort_recursive(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 *              using the Quick sort algorithm (Lomuto partition)
 * @array: pointer to the array to sort
 * @size: number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort_recursive(array, 0, (int)size - 1, size);
}
