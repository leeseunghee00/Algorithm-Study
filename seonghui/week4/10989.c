#include <stdio.h>

int main()
{
    int n, m, cnt[10001] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        cnt[m]++;
    }

    for (int i = 0; i <= 10000; i++)
    {
        if (cnt[i] != 0)
        {
            for (int j = 0; j < cnt[i]; j++)
                printf("%d\n", i);
        }
    }
}