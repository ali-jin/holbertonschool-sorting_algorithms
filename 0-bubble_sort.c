#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array of integers
 * @size: size of array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, len = size;
	int tmp;

	if (array != NULL)
	{
		for (i = 0; i < len - 1; i++)
		{
			for (j = 0; j < len - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
					print_array(array, size);
				}
			}
		}
	}
}
