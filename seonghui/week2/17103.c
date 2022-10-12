#include <stdio.h>
int a[1000001] = {0};

void prime_num(int n)
{
    for (int i = 2; i * i <= 1000000; i++)
    {
        if (a[i] == 0)
        {
            for (int j = 2; j * i <= 1000000; j++)
                a[j * i] = 1;
        }
    }
}

int main()
{
    int n, m, cnt;
    a[1] = 1;
    a[0] = 1;
    scanf("%d", &m);
    prime_num(m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &n);
        cnt = 0;
        for (int i = n / 2; i > 0; i--)
        {
            if (a[i] == 0 && a[n - i] == 0)
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
