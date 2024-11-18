#include <stdio.h>
#include <stdlib.h>

// Function for comparing integers (used in qsort)
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Function to perform binary search
int binarySearch(int arr[], int tar, int sz) {
    int left = 0;
    int right = sz - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == tar) {
            return mid;
        }
        else if (arr[mid] < tar) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

// Main function to test the binary search
int main() {
    // Test array and target value
    int arr[] = {9, 2, 4, 7, 3, 1, 8, 5, 6};
    int target = 5;
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sort the array before binary search
    qsort(arr, size, sizeof(int), compare);

    // Print sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform binary search
    int result = binarySearch(arr, target, size);

    // Print result
    if (result != -1) {
        printf("Target %d found at index: %d\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    return 0;
}
