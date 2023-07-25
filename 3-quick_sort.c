#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/*
 * Quick_sort - quick sort an array of int
 * Return: void
 */

//get the pivot element
//
void swap (int *x, int *y);
void quick_sort(int *array, size_t size)
{
	int pivot = array[size-1];
	unsigned long i = 0;
	printf("%i\n", pivot);

	for(i = 0; i < size; i++)
	{
		if(array[i] > pivot)
		{

			swap(&array[i], &pivot);

			printf("%i\n", array[i]);

			break;
		}
	}
	print_array(array, size);
}





//void swap (int *x, int *y);
//void quick_sort_recurrsion (int *array, int low, int high);
//int partition (int *array , int low , int high);
//
//void quick_sort(int *array, size_t size)
//{
//	quick_sort_recurrsion(array, 0, size-1);		
//}
//
void swap (int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
//
//void quick_sort_recurrsion( int *array, int low, int high)
//{
//	if (low < high)
//	{
//
//		int pivot_index = partition(array, low, high);
//		quick_sort_recurrsion(array, low, pivot_index - 1);
//		quick_sort_recurrsion(array, pivot_index + 1, high);
//	}
//}
//
//int partition(int *array , int low , int high)
//{
//	int pivot_value = array[high];
//	int i = low;
//	int j;
//
//	for(j = low; j < high; j++)
//	{
//		if (array[j] <= pivot_value)
//		{
//			swap(&array[i], &array[j]);
//			i++;
//		}
//	}
//	swap(&array[i], &array[high]);
//
//	return (i);
//}


