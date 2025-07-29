#include <stdio.h>

int linearSearch(int arr[], int size, int key, int index) {
    if (index >= size)
        return -1;
    if (arr[index] == key)
        return index;
    return linearSearch(arr, size, key, index + 1);
}

int main() {
    int size, key;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr[size]; // Variable Length Array

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = linearSearch(arr, size, key, 0);

    if (result == -1)
        printf("Element not found.\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}
