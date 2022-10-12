#include <stdio.h>
int arr[100];
int n , m;
long long cnt = 0;

void back(int idx, int input)
{
    if(idx == m)
    {
        cnt++;
    }
    else
    {
       while(input<=n)
       {
        arr[idx] = input;
        back(idx+1, input+1);
        input++;
       }
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    back(0,1);
    printf("%lld", cnt);
    return 0;
}