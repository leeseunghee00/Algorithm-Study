#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);

    int a, b;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d\n", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}