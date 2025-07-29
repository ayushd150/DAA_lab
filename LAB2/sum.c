#include <stdio.h>

int sumfrom1ton(int n) {
    if (n == 0)
        return 0;
    else
        return n + sumfrom1ton(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum from 1 to %d is: %d\n", n, sumfrom1ton(n));

    return 0;
}
