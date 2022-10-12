#include <stdio.h>

int arr[9];

void rec(int idx, int value, int N, int M){
    if (idx == M){
        for (int i = 0; i< M; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    while (value <= N){
        arr[idx] = value;
        rec(idx + 1, value + 1, N, M);
        value++;
    }
}
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    rec(0, 1, N, M);
    return 0;
}