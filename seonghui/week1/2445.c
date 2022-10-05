#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i =0;i<n;i++)
    {
        for(int j=0;j<2*n;j++)
        {
            if(i-j>=0 && j<=n)
                printf("*");
            else if(j>=n && n*2-i-1<=j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for (int i =n-1;i>0;i--)
    {
        for (int j=0;j<2*n;j++)
        {
            if(j<=n && i-j>0)
                printf("*");
            else if(j>=n && 2*n -i -1 < j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}