#include <stdio.h>

int a[1000];
int check[1000] = {0};
int n;

void back(int idx)
{
    int i;
    if (idx == n)
    {
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    else
    {
        for(i =1;i<=n;i++)
        {
            if(check[i]==0)
            {
                a[idx] = i;
                check[i] = 1;
                back(idx+1);
                check[i] = 0;
            }
        }
    }
}

int main()
{
    scanf("%d", &n);
    back(0);
}