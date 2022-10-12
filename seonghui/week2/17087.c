#include <stdio.h>

long long n, s;
long long arr[100001];

long long min_num()
{
    long long min = 1000000000;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

long long min()
{
    long long min = 1000000000, b;
    for (long long i = 0; i < n; i++)
    {
        b = s - arr[i];
        // printf("[%lld]", b);
        if (b < 0)
            b = -b;
        if (min > b)
            min = b;
    }
    return min;
}

long long sunback()
{
    int nn = min_num();
    int a = min();
}

int main()
{
    scanf("%lld %lld", &n, &s);
    for (int i = 0; i < n; i++)
        scanf("%lld", &arr[i]);
    printf("%lld", min());
}