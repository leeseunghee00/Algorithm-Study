#include <stdio.h>

int main() {
    int n, cnt=0, arr[1000001] = { 0 , };
    arr[1] = 1;

    do{
        scanf("%d", &n);
        if (n == 0)
            break;

        cnt = 0;
        for (int i = 2; i <= 2*n; i++) {
            for (int j = 2; i * j <= 2*n; j++) {
                arr[i * j] = 1;
            }
        }

        for (int i = n+1; i <= 2*n; i++) {
            if (arr[i] == 0) {
                cnt ++;
            }
        }
        printf("%d\n", cnt);
    } while (n != 0);


    return 0;
}