#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/*
 * bubble_sort - Performs bubble sort on arrays of integers
 * Description: Implement the bubble sort on an array of integrs
 * @parameter: an aray of intergers and size
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	unsigned long i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					int temp = array[j];

					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
				}
			}
		}
}
