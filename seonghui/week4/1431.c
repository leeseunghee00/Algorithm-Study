#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[51];
} String;

int f_sum(String a)
{
    int i = 0, sum = 0;
    while (a.name[i])
    {
        if (a.name[i] >= '0' && a.name[i] <= '9')
            sum += (a.name[i] - '0');
        i++;
    }
    // printf("[%s %d]\n", a.name, sum);
    return sum;
}

int main()
{
    int n;
    String *list, tmp;

    scanf("%d", &n);

    list = (String *)malloc(sizeof(String) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", list[i].name);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strlen(list[i].name) > strlen(list[j].name))
            {
                tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if ((strlen(list[i].name) == strlen(list[j].name)) && (f_sum(list[i]) > f_sum(list[j])))
            {
                tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((strlen(list[i].name) == strlen(list[j].name)) && (f_sum(list[i]) == f_sum(list[j])) && (strcmp(list[i].name, list[j].name)) > 0)
            {
                tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%s\n", list[i].name);
}