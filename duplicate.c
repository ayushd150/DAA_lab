#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter how many numbers you want to read: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int count = 0, max_count = 0, most_repeating;

    for(i = 0; i < n; i++) {
        int temp_count = 0;
        for(j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                temp_count++;
            }
        }
        if(temp_count > 0) {
            count++;
        }
        if(temp_count + 1 > max_count) {
            max_count = temp_count + 1;
            most_repeating = arr[i];
        }
    }

    printf("Total number of duplicate values = %d\n", count);
    printf("The most repeating element in the array = %d\n", most_repeating);

    return 0;
}
