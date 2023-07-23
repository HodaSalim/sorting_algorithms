#include <stdio.h>
#include "sort.h"

/*
 * Description: performs a selection sort on array of int
 * retun: void no return value
 * algo: modifies passed array to decenting order
 */

void selection_sort(int *array, size_t size)
{
	unsigned long i, j;

	for (i = 0; i < size - 1; i++)
	{
		unsigned long min_pos = i;

		for (j = i + 1; j < size; j++)

			if (array[j] < array[min_pos])
				min_pos = j;

		if (min_pos != i)
		{
			int temp = array[i];

			array[i] = array[min_pos];
			array[min_pos] = temp;
		}else
			continue;

		print_array(array, size);
	}
}
