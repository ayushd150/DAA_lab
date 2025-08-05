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

    clock_t start = clock();

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    clock_t end = clock();

    printf("\nSorted array (Insertion Sort):\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    double time_taken = (double)(end-start) / CLOCKS_PER_SEC;
    printf("\nTime taken: %f seconds\n", time_taken);
    
    return 0;
}


