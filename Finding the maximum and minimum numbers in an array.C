#chatgptai
#include <stdio.h>

void findMaxMin(int arr[], int size, int *max, int *min) {
    *max = arr[0]; // Initialize max with the first element
    *min = arr[0]; // Initialize min with the first element
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i]; // Update max if the current element is larger
        }
        if (arr[i] < *min) {
            *min = arr[i]; // Update min if the current element is smaller
        }
    }
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int max, min;
    
    findMaxMin(arr, size, &max, &min);
    
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    
    return 0;
}
