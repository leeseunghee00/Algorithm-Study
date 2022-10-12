#include <stdio.h>

int a[1000001] = {0};

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    for (int i = 2; i * i <= y; i++)
    {
        if (a[i] == 0)
            for (int j = 2; i * j <= y; j++)
                a[i * j] = 1;
    }

    a[0] = 1;
    a[1] = 1;
    for (int i = x; i <= y; i++)
        if (a[i] == 0)
            printf("%d\n", i);
}