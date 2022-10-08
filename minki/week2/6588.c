#include <stdio.h>

int arr[1000001] = { 0 ,};

void gold(int n){
    int a, b;
    for (int i = 3; i < n ; i = i+2){
        if (arr[i] == 0){
            if (arr[n - i] == 0)
            {
                a = i;
                b = n - i;
                printf ("%d = %d + %d\n", n, a, b);
                return ;
            }
        }
    }
    printf("Goldbach's conjecture is wrong.");
    return ;
}
int main()
{
    int n = 1;
    arr[1] = 1;
    //이 연산을 줄이는 방법 찾기.
    for (int i = 2; i <= 1000000; i++) {
        for (int j = 2; j <= 1000000 / i; j++) {
            arr[i * j] = 1;
        }
    }
    while (n != 0){
        scanf("%d", &n);
        if (n == 0)
            break;
        gold(n);
    }

}