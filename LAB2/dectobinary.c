#include <stdio.h>

void decToBinary(int n) {
    if (n == 0) {
        return;
    }
    decToBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n, num;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        printf("Binary: ");
        if (num == 0)
            printf("0");
        else
            decToBinary(num);
        printf("\n");
    }
    return 0;
}
