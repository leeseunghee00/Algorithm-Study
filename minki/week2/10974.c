#include <stdio.h>

int arr[9];
int flag[9] = {0,};

void rec(int N, int idx)
{
    if (idx == N){
        for (int i= 0; i < N; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    for (int value = 1; value <= N; value++){
        if (flag[value] == 0){
            arr[idx] = value;
            flag[value] = 1;
            rec(N, idx+1);
            flag[value] = 0;
        }

    }
}
int main()
{
    int N;
    scanf("%d", &N);
    rec(N, 0);
    return 0;
}