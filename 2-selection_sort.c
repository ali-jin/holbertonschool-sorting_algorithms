#include "sort.h"

/**
 * selection_sort - selection sort that sorts an array of integers in ascending
 * order
 * @array: array
 * @size: size of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp, min = 0;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
		if (min != i)
			print_array(array, size);
	}
}
