#include <stdio.h>

long long n;

int main()
{
    int a[11], i = 0, tmp;
    scanf("%lld", &n);

    while (n)
    {
        a[i++] = n % 10;
        n /= 10;
    }

    for (int j = 0; j < i-1; j++)
    {
        for (int k = j; k < i; k++)
        {
            if (a[j] < a[k])
            {
                tmp = a[j];
                a[j] = a[k];
                a[k] = tmp;
            }
        }
    }
    for(int j=0;j<i;j++)
        printf("%d", a[j]);
}