#include <stdio.h>

void prime_num(int a[], int n)
{
    for(int i =2;i*i<n;i++)
    {
        if(a[i] ==0){
            for(int j = 2; i*j <=n;j++)
                a[i*j] = 1;
        }
    }
}

int main()
{
    int n,m;
    int a[10000] = {0};
    a[1] = 1; 

    scanf("%d", &n);
    for(int i =0 ;i<n;i++)
    {
        scanf("%d", &m);
        prime_num(a, m);
        for(int j = m/2; j>0; j--)
        {
            //printf("[%d %d %d]\n", j, m-j, a[j]+a[m-j]);
            if(a[j]==0 && a[m-j] == 0)
            {
                printf("%d %d\n", j, m-j);
                break;
            }
        }
    }

}