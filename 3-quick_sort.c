#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: the array to sort
 * @size: number of elements in array
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	
	recursive_quick_sort(array, size, 0, size -1);
}

/**
 * recursive_quick_sort - sorts an array using a quick sort
 * @array: the array to sort
 * @low: the low end of the parition
 * @high: the high enf of the parition
 * Return: Nothing
 */

void recursive_quick_sort(int *array, size_t size, int low, int high)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = lomuto_partition(array, size, low, high);
		recursive_quick_sort(array, size, low, pivot_index - 1);
		recursive_quick_sort(array, size, pivot_index + 1, high);
	}
}

/**
 * lomuto_partition - partition array using lomuto
 * @array: array to partition
 * @low: the low indexend to parition
 * @high: the high index to partition
 * Return: final index of pivot element
 */

int lomuto_partition(int *array, size_t size,  int low, int high)
{
	int *pivot;
	int i, j;

	pivot = &array[high];
	for (i = j = low; j < high; j++)
	{
		if (array[j] < *pivot)
		{
			if (i < j)
			{
				swap(&array[j], &array[i]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] > *pivot)
	{
		swap(&array[i], pivot);
		print_array(array, size);
	}
	return (i);
}

/**
 * swap - swaps two integers
 * @array_x: the first point
 * @array_y: the second point
 * Return: Nothing
 */

void swap(int *array_x, int *array_y)
{
	int tmp;

	tmp = *array_x;
	*array_x = *array_y;
	*array_y = tmp;
}
