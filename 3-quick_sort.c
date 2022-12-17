#include "sort.h"

/**
  * quick_sort - function that sorts an array of integers in ascending
  * order using the Quick sort algorithm
  * @array: the array to print
  * @size: size of the array
  */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return;

	quick_sort_recursion(array, 0, size - 1, size);
}

/**
  * quick_sort_recursion - quick sort recursion
  * @array: the array to sort
  * @low: lower index
  * @high: higher index
  * @size: size of the array
  */

void quick_sort_recursion(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_recursion(array, low, pivot - 1, size);
		quick_sort_recursion(array, pivot + 1, high, size);
	}
}

/**
  * partition - a function that divides an array in two partitions
  * @array: the array to sort
  * @low: lower index
  * @high: higher index
  * @size: the size of the array
  * Return: i
  */

int partition(int *array, int low, int high, size_t size)
{
	int i = low;
	int j = high;
	int pivot = array[high];

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			swap(&array[i], &array[j]);

			if (i != j)
			print_array(array, size);
			i++;
		}
	}

	swap(&array[i], &array[high]);
	if (i != j)
	print_array(array, size);

	return (i);
}

/**
 * swap - function that swaps two integers
 * @a: first integer
 * @b: second integer
 */
void swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
