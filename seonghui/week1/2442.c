#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n + i; j++)
        {
            if (n - j -i-1<=0 && n-j+i-1>=0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}