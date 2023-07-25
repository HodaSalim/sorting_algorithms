#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void shell_sort(int *array, size_t size)
{
	unsigned long interval = 1;
	while (interval <= size / 3) {
		interval = interval * 3 + 1;
	}

	while (interval > 0) {
		unsigned long i;
		for (i = interval; i < size; i++) {
			int temp = array[i];
			unsigned long j = i;

			while (j >= interval && array[j - interval] > temp) {
				array[j] = array[j - interval];
				j -= interval;
			}
			array[j] = temp;
		}

		interval = (interval - 1) / 3;
		print_array(array, size);
	}
}
