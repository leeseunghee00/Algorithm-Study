#include <stdio.h>

int main()
{
    int n,x, min = 1000000, max =-1000000;
    scanf("%d", &n);
    
    for(int i =0;i<n;i++)
    {
        scanf("%d", &x);
        if(min > x)
            min = x;
        if(max < x)
            max = x;
    }
    printf("%d %d\n", min, max);
}