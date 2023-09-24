#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the pointer of an array
 * @size: the size of the array
 * Retrun: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		swapped = 0;

		for (b = 0; b < size -1 - a; b++)
		{
			if (array[b] > array[b + 1])
			{
				swap(&array[b], &array[b + 1]);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}

/**
 * swap - swaps two items
 * @array_x: the first item
 * @array_y: the second array
 * Return: Nothing
 */

void swap(int *array_x, int *array_y)
{
	int tmp;
	
	tmp = *array_x;
	*array_x = *array_y;
	*array_y = tmp;
}
