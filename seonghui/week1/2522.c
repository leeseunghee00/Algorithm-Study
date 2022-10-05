#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(n-i-1 <=j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    for(int i=1;i<n;i++)
    {
        for(int j=n;j>0;j--)
        {
            if(n-i >=j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}