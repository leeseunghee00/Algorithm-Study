#include <stdio.h>

int check[1000];

void back(int a[], int idx, int n, int m)
{
    int i;
    if (idx == m)
    {
        for (i = 0; i < m; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (check[i] == 1)
                continue;
            else
            {
                a[idx] = i;
                check[i] = 1;
                back(a, idx + 1, n, m);
                check[i] = 0;
            }
        }
    }
}

int main()
{
    int n, m, cnt, a[1000];

    scanf("%d %d", &n, &m);
    back(a, 0, n, m);
}