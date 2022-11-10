#include <stdio.h>
#include <string.h>

#define max 1000000
char stack[max];
int idx = 0;

void L()
{
    if (idx != 0)
        idx--;
    printf("%s %d\n", stack, idx);
}

void D()
{
    int i = 0;
    while (stack[i])
        i++;
    if (idx < i)
        idx++;
    printf("%s\n", stack);
}

void B()
{
    if (idx != 0)
    {
        stack[--idx] = 0;
    }
    printf("%s\n", stack);
}

void P(char m)
{
    int i = 0;
    while (stack[i])
        i++;
    
    if(i==idx)
        stack[idx] = m;
    else
    {
        for(int j=idx+1;j<i;j++)
            stack[j] = stack[j+1];
    }
    
    idx++;
    printf("%s %d\n", stack, idx);
}

int main()
{
    int n, i = 0;
    char c, m;

    scanf("%s", stack);
    while (stack[i++])
        idx++;
    // printf("%s %d\n",stack, idx);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &c);
        if (c == 'L')
            L();
        else if (c == 'D')
            D();
        else if (c == 'B')
            B();
        else if (c == 'P')
        {
            scanf(" %c", &m);
            P(m);
        }
    }

    printf("%s\n", stack);
}