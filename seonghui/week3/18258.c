#include <stdio.h>
#include <string.h>

#define max 2000010
int queue[max];
int idx = 0;

void push(int m)
{
    queue[idx++] = m;
}

void set()
{
    for(int i= 0;i<idx;i++)
        queue[i] = queue[i+1];

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
    {
        printf("%d\n", queue[0]);
        idx--;
        set();
    }
    else
        printf("-1\n");
}

void front()
{
     if (idx != 0)
        printf("%d\n", queue[0]);
    else
        printf("-1\n");
}


void size()
{
    printf("%d\n", idx);
}

void back()
{

    if (idx != 0)
    {
        printf("%d\n", queue[idx-1]);
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
        else if (!(strcmp(a, "front")))
            front();
        else
            back();
    }
}