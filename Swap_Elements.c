#include <stdio.h>

void swapElements(int arr[], int size, int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;

    // Print the updated array
    printf("Updated Array: ");
    for (int i = 0; i < size; i++) {
        
        printf("%d ", arr[i]);
    }
}

int main() {
    int size;
    printf("Enter Array size: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int index1, index2;
    printf("Enter two index to swap: ");
    scanf("%d %d", &index1, &index2);
    
    swapElements(arr, size, index1, index2);
    
    return 0;
}