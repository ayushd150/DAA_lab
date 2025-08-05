#include <stdio.h>

// 1. Basic Iterative Binary Search
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

// 2. Recursive Binary Search
int binarySearchRecursive(int arr[], int left, int right, int key) {
    if (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            return binarySearchRecursive(arr, left, mid - 1, key);
        else
            return binarySearchRecursive(arr, mid + 1, right, key);
    }
    return -1;
}

// 3. First and Last Occurrence
int firstOccurrence(int arr[], int n, int key) {
    int left = 0, right = n - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            result = mid;
            right = mid - 1;
        } else if (key < arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return result;
}

int lastOccurrence(int arr[], int n, int key) {
    int left = 0, right = n - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            result = mid;
            left = mid + 1;
        } else if (key < arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return result;
}

// 4. Count Occurrences
int countOccurrences(int arr[], int n, int key) {
    int first = firstOccurrence(arr, n, key);
    if (first == -1) return 0;
    int last = lastOccurrence(arr, n, key);
    return last - first + 1;
}

// 5. Square Root using Binary Search
double squareRoot(int n) {
    double left = 0, right = n, mid;
    double precision = 0.0001;

    while (right - left > precision) {
        mid = (left + right) / 2;
        if (mid * mid < n)
            left = mid;
        else
            right = mid;
    }
    return (left + right) / 2;
}

// 6. Search in Rotated Sorted Array
int searchRotated(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;

        if (arr[left] <= arr[mid]) {
            if (key >= arr[left] && key < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        } else {
            if (key > arr[mid] && key <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;
}

// --- Main Menu ---
int main() {
    int choice;
    do {
        printf("\n===== Binary Search Menu =====\n");
        printf("1. Iterative Binary Search\n");
        printf("2. Recursive Binary Search\n");
        printf("3. First and Last Occurrence\n");
        printf("4. Count Occurrences\n");
        printf("5. Square Root (Binary Search)\n");
        printf("6. Search in Rotated Sorted Array\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        int n, key, result;
        double sqrtResult;

        switch (choice) {
            case 1: {
                printf("Enter number of elements: ");
                scanf("%d", &n);
                int arr1[n];
                printf("Enter %d sorted elements:\n", n);
                for (int i = 0; i < n; i++)
                    scanf("%d", &arr1[i]);
                printf("Enter element to search: ");
                scanf("%d", &key);
                result = binarySearch(arr1, n, key);
                if (result == -1)
                    printf("Element not found.\n");
                else
                    printf("Element found at index %d\n", result);
                break;
            }

            case 2: {
                printf("Enter number of elements: ");
                scanf("%d", &n);
                int arr2[n];
                printf("Enter %d sorted elements:\n", n);
                for (int i = 0; i < n; i++)
                    scanf("%d", &arr2[i]);
                printf("Enter element to search: ");
                scanf("%d", &key);
                result = binarySearchRecursive(arr2, 0, n - 1, key);
                if (result == -1)
                    printf("Element not found.\n");
                else
                    printf("Element found at index %d\n", result);
                break;
            }

            case 3: {
                printf("Enter number of elements: ");
                scanf("%d", &n);
                int arr3[n];
                printf("Enter %d sorted elements:\n", n);
                for (int i = 0; i < n; i++)
                    scanf("%d", &arr3[i]);
                printf("Enter element to find first and last occurrence: ");
                scanf("%d", &key);
                int first = firstOccurrence(arr3, n, key);
                int last = lastOccurrence(arr3, n, key);
                if (first == -1)
                    printf("Element not found.\n");
                else
                    printf("First: %d, Last: %d\n", first, last);
                break;
            }

            case 4: {
                printf("Enter number of elements: ");
                scanf("%d", &n);
                int arr4[n];
                printf("Enter %d sorted elements:\n", n);
                for (int i = 0; i < n; i++)
                    scanf("%d", &arr4[i]);
                printf("Enter element to count: ");
                scanf("%d", &key);
                result = countOccurrences(arr4, n, key);
                printf("Element occurs %d times.\n", result);
                break;
            }

            case 5: {
                printf("Enter number to find square root: ");
                scanf("%d", &n);
                sqrtResult = squareRoot(n);
                printf("Square root of %d ≈ %.4lf\n", n, sqrtResult);
                break;
            }

            case 6: {
                printf("Enter number of elements: ");
                scanf("%d", &n);
                int arr6[n];
                printf("Enter %d rotated sorted elements:\n", n);
                for (int i = 0; i < n; i++)
                    scanf("%d", &arr6[i]);
                printf("Enter element to search: ");
                scanf("%d", &key);
                result = searchRotated(arr6, n, key);
                if (result == -1)
                    printf("Element not found.\n");
                else
                    printf("Element found at index %d\n", result);
                break;
            }

            case 0:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
