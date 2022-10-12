#include <stdio.h>
int nm1(int n, int m)
{
    int re = 1;
    for (int i = 1; i <= n || i <= m; i++)
    {
        if (n % i == 0 && m % i == 0)
            re = i;
    }
    return re;
}

int nm2(int n, int m, int nm)
{
    int re = nm;
    for (int i = 1; i * nm <= n * m; i++)
    {
        if (i * nm % n == 0 && i * nm % m == 0)
        {
            re = nm * i;
            break;
        }
    }
    return re;
}

int main()
{
    int n, m, nm;

    scanf("%d %d", &n, &m);
    nm = nm1(n, m);
    printf("%d\n%d", nm, nm2(n, m, nm));
}

/*
int main()
{
    int a,b,M,m,i;
    scanf("%d %d",&a,&b);
    M=1;
    m=1;
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
         m = i;
    }
    M = a*b/m;
    printf("%d\n%d",m,M);
}
*/