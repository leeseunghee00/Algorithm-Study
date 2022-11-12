#include <stdio.h>

int main()
{
    int a[6], tmp, flag = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    while (1)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j <= i + 1; j++)
            {
                if (a[i] > a[j])
                {
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                    flag = 1;
                }
            }
            if (flag == 1)
            {
                for (int i = 0; i < 5; i++)
                    printf("%d ", a[i]);
                printf("\n");
                flag = 0;
            }
        }
        if (a[0] == 1 && a[1] == 2 && a[2] == 3 && a[3] == 4 && a[4] == 5)
            break;
    }
}