// Write a C program that demonstrates the use of calloc() for dynamic memory allocation with automatic zero initialization.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    // Using calloc() to allocate memory for the array
    int *arr = (int*) calloc(size, sizeof(int));
    
    // Check if allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Memory allocated and initialized to zero!\n");
    
    // Print initial values (should be zero)
    printf("Initial values:");
    for (int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
    printf("\nEnter %d new values: ", size);
    
    // Read and store the input values
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Print updated values
    printf("Updated values:");
    for (int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
    
    // Calculate and print the sum
    int sum = 0;
    int multiplication = 1;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        multiplication *= arr[i];
    }
    printf("Sum of the numbers = %d\n", sum);
    printf("Multiplication of the numbers = %d\n", multiplication);
    
    // Free the allocated memory
    free(arr);
    printf("Memory freed!\n");
    
    return 0;
}