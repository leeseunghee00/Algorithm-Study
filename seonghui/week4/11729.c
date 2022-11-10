#include <stdio.h>

long long cnt = 1;

void hanoi(int n, int src, int des, int tmp)
{
    if (n == 1)
    {
        printf("%d %d\n", src, des);
        return;
    }
    else
    {
        hanoi(n - 1, src, tmp, des);
        printf("%d %d\n", src, des);
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
    hanoi(n, 1, 3, 2);
    return 0;
}

/*

#include <stdio.h>
#include <stdlib.h>

char buffer[10000000];
int i = 0;
void append(int a, int b)
{
    buffer[i++] = a + 48;
    buffer[i++] = ' ';
    buffer[i++] = b + 48;
    buffer[i++] = '\n';
}

void Hanoi(int num, int from, int by, int to, int *times)
{
    if(num == 1)
    {
        append(from, to);
        ++*times;
    }
    else
    {
        Hanoi(num - 1, from, to, by, times);
        append(from, to); ++*times;
        Hanoi(num - 1, by, from ,to, times);
    }
}

int main(void)
{
    int times = 0, n;
    scanf("%d", &n);

    Hanoi(n, 1, 2, 3, &times);
    printf("%d\n%s", times, buffer);
    return 0;
}
*/