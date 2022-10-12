#include <stdio.h>

int arr[1000001] = { 0 ,};

void gold(int n){
    int a, b;
    for (int i = n / 2 ; i > 0; i--){
        if (arr[i] == 0){
            if (arr[n - i] == 0)
            {
                a = i;
                b = n - i;
                printf ("%d %d\n", a, b);
                return ;
            }
        }
    }
}
int main()
{
    int T, n;
    scanf("%d", &T);
    arr[1] = 1;
    for (int i = 0 ; i < T; i++){
        scanf("%d", &n);
        for (int i = 2; i <= n; i++) {
            for (int j = 2; i * j <= n; j++) {
                arr[i * j] = 1;
            }
        }
        gold(n);
    }
}