#include <stdio.h>
#include <string.h>

#define max 10000
int stack[max];
int idx = 0;

void push(int m)
{
    stack[idx++] = m;
}

void empty()
{
    if (idx == 0)
        printf("%d\n", 1);
    else
        printf("%d\n", 0);
}

void pop()
{
    if (idx != 0)
        printf("%d\n", stack[--idx]);
    else
        printf("-1\n");
}

void size()
{
    printf("%d\n", idx);
}

void top()
{

    if (idx != 0)
    {
        printf("%d\n", stack[--idx]);
        idx++;
    }
    else
        printf("-1\n");
}

int main()
{
    int n, m;
    char a[10];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a);
        getchar();
        if (!(strcmp(a, "push")))
        {
            scanf("%d", &m);
            push(m);
        }
        else if (!(strcmp(a, "pop")))
            pop();
        else if (!(strcmp(a, "size")))
            size();
        else if (!(strcmp(a, "empty")))
            empty();
        else
            top();
    }
}