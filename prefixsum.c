#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], prefixSum[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    prefixSum[0] = arr[0];
    for(i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    printf("Prefix Sum Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", prefixSum[i]);
    }
    printf("\n");

    return 0;
}
