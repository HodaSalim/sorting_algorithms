#include <stdio.h>
#include "sort.h"
/*
 * bubble_sort: performs bubble sort on arrays of integers
 * Return: the original array, the array after each sorting phase and the final sorted array
 * */
void bubble_sort(int *array, size_t size)
{
	unsigned long i;
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1]) {
		
			int temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			print_array(array, size);
		}
	}
}
