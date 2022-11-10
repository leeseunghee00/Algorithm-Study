#include <stdio.h>

typedef struct bj
{
    int age;
    char name[101];
} bj;

bj sign[100002];

int main()
{
    int n;
    bj tmp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &sign[i].age, sign[i].name);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (sign[j].age > sign[j + 1].age)
            {
                tmp = sign[j];
                sign[j] = sign[j + 1];
                sign[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d %s\n", sign[i].age, sign[i].name);
    }
}