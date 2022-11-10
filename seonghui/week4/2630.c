#include <stdio.h>
int a[128][128];
int cnt1, cnt2;

int check(int n, int row, int col)
{
    int target = a[row][col];
    for (int i = row; i < row + n; i++)
    {
        for (int j = col; j < col + n; j++)
        {
            if (a[i][j] != target)
                return -1;
        }
    }
    if (target == 0)
        cnt1++;
    else
        cnt2++;
    return 1;
}

void paper(int n, int row, int col)
{
    if (check(n, row, col) != 1)
    {
        paper(n / 2, row, col);
        paper(n / 2, row + n / 2, col);
        paper(n / 2, row, col + n / 2);
        paper(n / 2, row + n / 2, col + n / 2);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    paper(n, 0, 0);
    printf("%d\n%d", cnt1, cnt2);
}