#include <stdio.h>

long long nm1(long long n, long long m)
{
    long long re = 1;
    for (int i = 1; i <= n || i <= m; i++)
    {
        if (n % i == 0 && m % i == 0)
            re = i;
    }
    return re;
}

int main()
{
    long long n, m, a=1, b=1;
    scanf("%lld", &n);
    for(int i = 0;i<n;i++)
    {
        scanf("%lld", &m);
        a*= m;
    }
    printf("[%lld]\n",a);
    scanf("%lld", &n);
    for(int i = 0;i<n;i++)
    {
        scanf("%lld", &m);
        b*= m;
    }
    printf("[%lld]\n",b);
    printf("%lld", nm1(a,b));

}