#include <stdio.h>

// Function to calculate the sum of boundary elements
int sumBoundary(int matrix[][100], int size) {
    // Special case: 1x1 matrix
    if (size == 1) {
        return matrix[0][0];
    }

    int sum = 0;

    // Top row
    for (int j = 0; j < size; j++) {
        sum += matrix[0][j];
    }

    // Bottom row
    for (int j = 0; j < size; j++) {
        sum += matrix[size - 1][j];
    }

    // Left column (excluding first & last element already counted)
    for (int i = 1; i < size - 1; i++) {
        sum += matrix[i][0];
    }

    // Right column (excluding first & last element already counted)
    for (int i = 1; i < size - 1; i++) {
        sum += matrix[i][size - 1];
    }

    return sum;
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    int matrix[100][100];
    printf("Enter the sq. matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int result = sumBoundary(matrix, size);
    printf("Sum of all elements on the boundary: %d\n", result);
    
    return 0;
}