#include <stdio.h>
int n ,m;
int arr[1000];
int cnt = 0;

void check(int a, int b)
{
    if(a == n)
    {
        if(b == m)
        cnt++;
        return;
    }
    else
    {
        check(a+1, b);
        check(a+1, b+arr[a]);
    }
}
int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    check(0, 0);
    if(m == 0)
        cnt--;
    printf("%d", cnt);
    return 0;
}