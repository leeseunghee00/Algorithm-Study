#include <stdio.h>

long long cnt = 1;

void hanoi(int n, int src, int des, int tmp)
{
    if (n == 1)
    {
        printf("%d %d\n", src, des);
        cnt++;
        return;
    }
    else
    {
        hanoi(n - 1, src, tmp, des);
        printf("%d %d\n", src, des);
        cnt++;
        hanoi(n - 1, tmp, des, src);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        cnt *= 2;
    printf("%lld\n", cnt - 1);
    if (n <= 20)
        hanoi(n, 1, 3, 2);
    return 0;
}