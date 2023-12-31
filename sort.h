#ifndef SORT_H
#define SORT_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/*sorting prototypes */

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* swapping prototypes */
void swap(int *array_x, int *array_y);
void swap_points(listint_t **head, listint_t **point1, listint_t **point2);

/* helper prototype functions */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* lomuto prototype function */
void recursive_quick_sort(int *array, size_t size, int low, int high);
int lomuto_partition(int *array, size_t size, int low, int high);

#endif /* SORT_H */
