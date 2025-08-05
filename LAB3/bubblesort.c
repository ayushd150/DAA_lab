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

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    clock_t end = clock();  // End time


    printf("\nSorted array (Bubble Sort):\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nTime taken: %f seconds\n", time_taken);

    return 0;
}
