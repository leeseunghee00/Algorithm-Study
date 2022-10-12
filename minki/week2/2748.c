#include <stdio.h>

long long fibonacci(int n);
long long f[90];

int main() {
    int N;
    scanf("%d", &N);
    printf("%lld", fibonacci(N));
    return 0;
}

long long fibonacci(int n) {
    if (n == 0)
        f[n]= 0;
    else if (n == 1 || n == 2)
        f[n]= 1;
    else if (f[n] != 0)
        return f[n];
    else
        f[n]= fibonacci(n - 1) + fibonacci(n - 2);

    return f[n];
}