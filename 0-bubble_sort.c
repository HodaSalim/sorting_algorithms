#include <stdio.h>
#include "sort.h"
/*
 * bubble_sort: performs bubble sort on arrays of integers
 * Return: the original array, the array after each sorting phase and the final sorted array
 * */
void bubble_sort(int *array, size_t size)
{
	unsigned long i, j;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
}
