#include <stdio.h>
#include <string.h>

#define max 1000000
int stack[max];
int idx = 0;

void push(int m)
{
    stack[idx++] = m;
}

void pop()
{
    idx--;
}

int main()
{
    int n, m;
    long long sum=0;
    char a[10];

    scanf("%d", &n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d", &m);
        if(m== 0)
            pop();
        else
            push(m);

    }
    for(int i = 0;i<idx;i++)
    {
        sum += stack[i];
    }
    printf("%ld\n", sum);
}