#include <stdio.h>

int arr[1000001] = { 0 ,};

void gold(int n){
    int cnt = 0;
    for (int i = n / 2; i >0 ; i--){
        if (arr[i] == 0){
            if (arr[n - i] == 0)
            {
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return ;
}
int main() {
    int T, n;
    arr[1] = 1;
    scanf("%d", &T);
    for (int i = 2; i <= 1000000; i++) {
        for (int j = 2; j <= 1000000 / i; j++) {
            arr[i * j] = 1;
        }
    }
    for (int i = 0; i < T; i++) {
        scanf("%d", &n);
        gold(n);
    }
    return 0;
}