#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: the array to sort
 * @size: the size of elements in array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	int min_index;
	size_t j, k;

	if (array == NULL || size < 2)
		return;

	for (j = 0; j < size - 1; j++)
	{
		min_index = j;

		for (k = j + 1; k < size; k++)
		{
			if (array[k] < array[min_index])
				min_index = k;
		}
		if (array[min_index] < array[j])
		{
			swap(&array[j], &array[min_index]);
			print_array(array, size);
		}
	}
}

/**
 * swap - swaps two numbers
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
