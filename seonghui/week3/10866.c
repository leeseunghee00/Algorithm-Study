#include <stdio.h>
#include <string.h>

#define max 100000
int deque[max];
int idx = 0;

void set()
{
    for (int i = 0; i < idx; i++)
        deque[i] = deque[i + 1];
}

void set_2()
{

    int tmp;
    for (int i = idx; i > 0; i--)
    {
        deque[i] = deque[i - 1];
    }
}

void push_front(int m)
{
    set_2();
    deque[0] = m;
    idx++;
    /*for(int i = 0;i<idx;i++)
        printf("%d ", deque[i]);
    printf("\n");*/
}

void push_back(int m)
{
    deque[idx] = m;
    idx++;
    // printf("[%d]\n",deque[idx-1]);
}

void empty()
{
    if (idx == 0)
        printf("%d\n", 1);
    else
        printf("%d\n", 0);
}

void pop_front()
{
    if (idx != 0)
    {
        printf("%d\n", deque[0]);
        set();
        idx--;
    }
    else
        printf("-1\n");
}

void pop_back()
{
    if (idx != 0)
    {
        printf("%d\n", deque[idx - 1]);
        idx--;
    }
    else
        printf("-1\n");
}

void front()
{
    if (idx != 0)
        printf("%d\n", deque[0]);
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
        printf("%d\n", deque[idx - 1]);
    }
    else
        printf("-1\n");
}

int main()
{
    int n, m;
    char a[11];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %s", a);
        // printf("[%s]\n", a);
        if (!(strcmp(a, "push_front")))
        {
            scanf(" %d", &m);
            push_front(m);
        }
        if (!(strcmp(a, "push_back")))
        {
            scanf(" %d", &m);
            push_back(m);
        }
        else if (!(strcmp(a, "pop_front")))
            pop_front();
        else if (!(strcmp(a, "pop_back")))
            pop_back();
        else if (!(strcmp(a, "size")))
            size();
        else if (!(strcmp(a, "empty")))
            empty();
        else if (!(strcmp(a, "front")))
            front();
        else if (!(strcmp(a, "back")))
            back();
    }
}