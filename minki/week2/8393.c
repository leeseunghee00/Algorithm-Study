#include <stdio.h>

int main()
{
    int n, ret;
    scanf("%d", &n);
    ret = 0;
    for (int i = 1 ; i<= n; i++)
    {
        ret += i;
    }
    printf("%d", ret);
    return 0;
}