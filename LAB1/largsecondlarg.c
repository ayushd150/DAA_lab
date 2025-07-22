#include <stdio.h>

int main() {
    int arr[10], i;
    int largest, second_largest;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second_largest
    if(arr[0] > arr[1]) {
        largest = arr[0];
        second_largest = arr[1];
    } else {
        largest = arr[1];
        second_largest = arr[0];
    }

    // Find largest and second largest
    for(i = 2; i < 10; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    printf("Largest number: %d\n", largest);
    printf("Second largest number: %d\n", second_largest);

    return 0;
}
