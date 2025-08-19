#include <stdio.h>
#include <stdlib.h>

long long power(long long a, int n) {
    if (n == 0) return 1;
    if (n == 1) return a;
    long long ans = power(a, n / 2);
    
    if (n % 2 == 0)
        return ans * ans;
    else 
        return a * ans * ans;
}

int main() {
    long long a;
    int n;
    printf("Enter a and n:\n");
    scanf("%lld %d", &a, &n);   // use %lld for long long
    
    long long ans = power(a, n);
    printf("a^n = %lld\n", ans);
    return 0;
}
