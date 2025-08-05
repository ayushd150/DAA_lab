#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    srand(time(0));

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }

    clock_t start = clock();  // Start time

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex])
                minIndex = j;
        }
        // Swap
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    clock_t end = clock();  // End time

    printf("\nSorted array (Selection Sort):\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nTime taken: %f seconds\n", time_taken);

    return 0;
}
