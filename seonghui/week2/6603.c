#include <stdio.h>
int arr[100];
int re[10];
int n;

int back(int idx, int a)
{
    if(a == 6)
    {
        for(int i = 0;i<6;i++)
            printf("%d ", re[i]);
        printf("\n");
    }
    else
    {
       for(int i = idx; i<n;i++)
       {
        re[a] = arr[i];
        back(i+1, a+1);
       }
    }
}

int main()
{
    while(1)
    {
        scanf("%d", &n);
        if(n==0)
            return 0;
        for(int i = 0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }
         back(0,0);
         printf("\n");
    }
}