#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * swap_points - swaps two node point
 * @head: pointer to the head of the list
 * @point1: the first point node
 * @point2: the second point node
 * Return: Nothing
 */

void swap_points(listint_t **head, listint_t **point1, listint_t **point2)
{
	listint_t *i, *j;

	i = *point1;
	j = *point2;

	if (i->prev != NULL)
		i->prev->next = j;
	else
		*head = j;
	if (j->next != NULL)
		j->next->prev = i;
	i->next = j->next;
	j->next = i;
	j->prev = i->prev;
	i->prev = j;
	i = j->prev;
}

/**
 * insertion_sort_list - sorts a doubly linked list 
 * @list: the head of the list
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		temp = current->prev;
		while (temp != NULL)
		{
			if (temp->next->n < temp->n)
			{
				swap_points(list, &temp, &temp->next);
				print_list((*list));
			}
			temp = temp->prev;
		}
		current = current->next;
	}
}
