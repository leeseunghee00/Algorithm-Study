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
    int n = 1, cnt = 0;
    a[1] = 1;
    prime_num(n);
    while (n != 0)
    {
        scanf("%d", &n);
        cnt = 0;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] == 0 && a[n - i] == 0)
            {
                printf("%d = %d + %d\n", n, i, n - i);
                cnt++;
                break;
            }
        }
        if (n != 0 && cnt == 0)
        {
            printf("Goldbach's conjecture is wrong.\n");
            continue;
        }
    }
    return 0;
}
