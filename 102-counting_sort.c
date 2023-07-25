#include <stdio.h>
#include <stdlib.h>

void counting_sort(int *array, size_t size) {
    // Find the maximum value in the input array
    int max_value = 0;
    for (size_t i = 0; i < size; i++) {
        if (array[i] > max_value) {
            max_value = array[i];
        }
    }
    
    // Allocate memory for the counting array
    int *count = (int *)malloc((max_value + 1) * sizeof(int));
    if (count == NULL) {
        fprintf(stderr, "Error: Failed to allocate memory for counting array\n");
        exit(1);
    }
    
    // Initialize the counting array to zero
    for (int i = 0; i <= max_value; i++) {
        count[i] = 0;
    }
    
    // Count the occurrence of each value in the input array
    for (size_t i = 0; i < size; i++) {
        count[array[i]]++;
    }
    
    // Print the counting array
    printf("Counting array: ");
    for (int i = 0; i <= max_value; i++) {
        printf("%d ", count[i]);
    }
    printf("\n");
    
    // Reconstruct the sorted array from the counting array
    int index = 0;
    for (int i = 0; i <= max_value; i++) {
        for (int j = 0; j < count[i]; j++) {
            array[index] = i;
            index++;
        }
    }
    
    // Free the memory allocated for the counting array
    free(count);
}
