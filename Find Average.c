//calculate the average & print the result with exactly 2 decimal places.
#include <stdio.h>

float findAverage(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int numbers[size];
    
    // Read array elements
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // Call your function and print the result
    float average = findAverage(numbers, size);
    printf("Average: %.2f\n", average);
    
    return 0;
}