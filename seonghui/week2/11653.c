#include <stdio.h>

int main()
{
    int n ,m, i=2;
    scanf("%d", &n);
    m = n;
    while (i<=n)
    {
        if(m % i ==0)
        {
            m = m / i;
            printf("%d\n", i);
            i = 2;
            continue;
        }
        i++;
    }
}