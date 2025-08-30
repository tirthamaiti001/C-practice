// Write a C program that creates a dynamic array based on user input, processes the data, and demonstrates proper memory management.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // 1. Allocate memory for n integers using malloc()
    int *arr = (int*) malloc(n * sizeof(int));
    
    // 2. Check if allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Array of size %d created successfully!\n", n);
    
    // 3. Read n integers into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 4. Calculate sum, find minimum, maximum
    int sum = 0;
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    // 5. calculate avarage, count elements above average
    double avg = (double) sum / n;    
    int above_avg_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            above_avg_count++;
        }
    }
    
    // 5. Print results and free memory
    printf("Sum of the numbers: %d\n", sum);
    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);
    printf("Avarage of the numbers: %.2f\n", avg);
    printf("Numbers above average: %d\n", above_avg_count);
    printf("Total memory used: %d bytes\n", n * (int)sizeof(int));
    
    free(arr);
    printf("Memory freed successfully!\n");
    
    return 0;
}