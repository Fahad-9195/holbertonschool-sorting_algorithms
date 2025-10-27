#include "sort.h"

/**
 * swap_ints - swaps two integers in an array
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Note: does nothing if *a == *b to avoid redundant swaps/prints.
 */
static void swap_ints(int *a, int *b)
{
	int tmp;

	if (a == b || *a == *b)
		return;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - partitions the array using the Lomuto scheme
 * @array: the array to partition
 * @low: starting index
 * @high: ending index (pivot index)
 * @size: total size of the array (for printing)
 *
 * Return: the final pivot index
 *
 * Description:
 * - Pivot is array[high].
 * - Prints the array after each *effective* swap (values actually change).
 */
static int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			/* swap only if it changes values */
			if (i != j && array[i] != array[j])
			{
				swap_ints(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	/* place pivot: swap only if it changes values */
	if (array[i + 1] != array[high])
	{
		swap_ints(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quicksort_recursive - recursively applies the Quick sort
 * @array: the array to sort
 * @low: starting index
 * @high: ending index
 * @size: total size of the array
 */
static void quicksort_recursive(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = lomuto_partition(array, low, high, size);
		quicksort_recursive(array, low, p - 1, size);
		quicksort_recursive(array, p + 1, high, size);
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
