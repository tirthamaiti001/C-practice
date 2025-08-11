//rotate the sq. matrix (<=10x10) 90 degrees clockwise.
#include <stdio.h>

void initializeMatrix(int matrix[][10], int size) {
    int value = 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = value++;
        }
    }
}

void rotateMatrix(int original[][10], int rotated[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            rotated[j][size - 1 - i] = original[i][j];
        }
    }
}

int main() {
    int n;
    printf("Enter array size: "); //size <= 10
    scanf("%d", &n);
    int matrix[10][10];
    int rotated[10][10];
    
    initializeMatrix(matrix, n);    
    printf("Original Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    rotateMatrix(matrix, rotated, n);
    printf("Rotated Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", rotated[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}