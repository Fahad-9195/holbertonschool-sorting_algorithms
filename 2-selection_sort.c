#include "sort.h"

/**
 * swap_ints - swap two integers in place
 * @a: pointer to first integer
 * @b: pointer to second integer
 */
static void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 * @array: pointer to the array to sort
 * @size: number of elements in the array
 *
 * Description: prints the array after each swap
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		if (min_idx != i)
		{
			swap_ints(&array[i], &array[min_idx]);
			print_array(array, size);
		}
	}
}
