#include <stdio.h>

int main()
{
    int n, num, idx, p[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &num, &idx);
        for (int j = 0; i < num; j++)
            scanf("%d", &p[j]);
    }
}