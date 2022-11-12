#include <stdio.h>
int arr[1001];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int tmp;

    for(int i = 0;i<n;i++)
    {
        for(int j =i;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(int i = 0;i<n;i++)
        printf("%d\n", arr[i]);
}