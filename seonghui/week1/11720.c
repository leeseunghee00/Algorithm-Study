#include <stdio.h>

int main()
{
    int n, sum =0;
    char a[101];
    scanf("%d\n", &n);
    scanf("%s", a);
    for(int i =0;i<n;i++)
    {
        sum+=a[i] -'0';
        // printf("[%d]", sum);  
    }
    printf("%d\n", sum);
}