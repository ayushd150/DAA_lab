#include <stdio.h>

// Structure to return both max and min
struct Result {
    int min;
    int max;
};

struct Result findMinMax(int arr[], int low, int high) {
    struct Result res, left, right;

    // If only one element
    if (low == high) {
        res.min = res.max = arr[low];
        return res;
    }

    // If two elements
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            res.min = arr[low];
            res.max = arr[high];
        } else {
            res.min = arr[high];
            res.max = arr[low];
        }
        return res;
    }

    // More than 2 elements → divide
    int mid = (low + high) / 2;
    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid + 1, high);

    // Combine results
    res.min = (left.min < right.min) ? left.min : right.min;
    res.max = (left.max > right.max) ? left.max : right.max;

    return res;
}

int main() {
    int arr[] = {20, 5, 7, 100, 45, 2, 77, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    struct Result ans = findMinMax(arr, 0, n - 1);

    printf("Minimum: %d\n", ans.min);
    printf("Maximum: %d\n", ans.max);

    return 0;
}
