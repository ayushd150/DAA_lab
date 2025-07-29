#include <stdio.h>

// Recursive function for binary search
int binarySearch(int arr[], int left, int right, int key) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        // If the element is found at mid
        if (arr[mid] == key)
            return mid;

        // If the element is smaller than mid, search left subarray
        if (key < arr[mid])
            return binarySearch(arr, left, mid - 1, key);

        // Else, search right subarray
        return binarySearch(arr, mid + 1, right, key);
    }

    // Element not found
    return -1;
}

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)
        printf("Element not found.\n");
    else
        printf("Element found at index %d.\n", result);

    return 0;
}
