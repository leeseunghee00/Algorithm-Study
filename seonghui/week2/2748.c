#include <stdio.h>
long long a[91] ={0};
long long fibonachi(int n)
{
    a[0] = 0;
    a[1] = 1;
    for(int i=2;i<=n;i++)
        a[i] = a[i-2] + a[i-1];
    return a[n];
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld\n", fibonachi(n));
}