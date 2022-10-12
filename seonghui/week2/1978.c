#include <stdio.h>

int a[1001] = {0};

int prime_num(int y)
{
    
    for (int i = 2; i * i <= y; i++)
    {
        if (a[i] == 0)
            for (int j = 2; i * j <= y; j++)
                a[i * j] = 1;
    }
    a[0] = 1;
    a[1] = 1;
    if(a[y]== 0) return (1);
    return 0;
}

int main(void)
{
    int n, x, cnt =0;
    scanf("%d",&n);
    
    for(int i = 0;i<n;i++)
    {
        scanf("%d", &x);
        if(prime_num(x) == 1) cnt++;
    }
    printf("%d", cnt);
}