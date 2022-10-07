#include <stdio.h>

int arr[9];
int flag[9] = {0,};

void rec(int idx, int N, int M){
    if (idx == M){
        for (int i = 0; i< M; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    for (int value= 1 ; value <= N; value++){
        if (flag[value] == 0){
            arr[idx] = value;
            flag[value] = 1;
            rec(idx + 1, N, M);
            flag[value] = 0;
        }
    }
}
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    rec(0, N, M);
    return 0;
}