#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

int main() {
    int a[SIZE];
    
    printf("Original array:\n");
    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }

    // Bubble Sort
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array (Bubble Sort):\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", a[i]);

    return 0;
}
