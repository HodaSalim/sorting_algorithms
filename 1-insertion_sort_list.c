#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap_nodes - Performs bubble sort on arrays of integers
 *
 * @list : an aray of intergers and size
 * @node_a: an aray of intergers and size
 * @node_b: an aray of intergers and size
 *
 * Return: void
*/
void swap_nodes(listint_t **list, listint_t *node_a, listint_t *node_b)
{
	if (node_a == NULL || node_b == NULL || node_a == node_b)
	{
		return;
	}
	if (node_a->prev != NULL)
	{
		node_a->prev->next = node_b;
	} else
	{
		*list = node_b;
	}

	if (node_b->next != NULL)
	{
		node_b->next->prev = node_a;
	}

	listint_t *temp = node_b->next;

	node_b->next = node_a;
	node_a->prev = node_b;
	node_a->next = temp;

	if (temp != NULL)
	{
		temp->prev = node_a;
	}
}

/**
 * insertion_sort_list - Performs bubble sort on arrays of integers
 *
 * @list : a linked list of intergers
 *
 * Return: void
*/
void insertion_sort_list(listint_t **list)
{
	if (*list == NULL || (*list)->next == NULL)
	{
		return;
	}

	listint_t *current = (*list)->next;

	while (current != NULL)
	{
		listint_t *prev = current->prev;

		while (prev != NULL && prev->n > current->n)
		{
			swap_nodes(list, prev, current);
			prev = current->prev;
			print_list(*list);
		}

		current = current->next;
	}
}
