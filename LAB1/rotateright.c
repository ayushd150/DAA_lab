#include <stdio.h>

// Swap two numbers using pointers
void EXCHANGE(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

// Rotate first p2 elements to the right by 1
void ROTATE_RIGHT(int A[], int p2) {
    int i;
    for(i = p2 - 1; i > 0; i--) {
        EXCHANGE(&A[i], &A[i - 1]);
    }
}

int main() {
    int n, p2, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter how many elements to rotate: ");
    scanf("%d", &p2);

    if(p2 > n || p2 < 1) {
        printf("Invalid number of elements to rotate!\n");
        return 1;
    }

    printf("Before ROTATE: ");
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    ROTATE_RIGHT(A, p2);

    printf("After  ROTATE: ");
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
