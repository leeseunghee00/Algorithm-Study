#include <stdio.h>

int a[1000];
int n , m;

void back(int idx, int input)
{
    int i;
    if (idx == m)
    {
        for (i = 0; i < m; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    else
    {
        while(input<=n)
        {
            a[idx] = input;
            back(idx + 1, input+1);
            input++;
        }
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    back(0, 1);
}