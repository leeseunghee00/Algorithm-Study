#include <stdio.h>

int a[1000000] = {0};

void prime_num(int n)
{
    for(int i = 2; i*i<=2*n;i++)
    {
        if(a[i]==0)
            for(int j =2;i*j <=2*n;j++)
                a[i*j]= 1
                ;
    }
    a[1] = 1;
}

int main()
{
    int n;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0) break;
        int cnt = 0;
        prime_num(n);
        for(int i =n+1; i<=2*n ;i++)
        {
            if(a[i]==0)
                cnt++;
        }
        printf("%d\n", cnt);
    }
}