#include <stdio.h>
#include "sort.h"

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
