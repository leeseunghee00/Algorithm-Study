#include <stdio.h>

int out[6];
void rec(int N, int idx, int *arr, int *flag, int this){
    if (idx == 6){
        for (int i = 0 ; i < 6; i++){
            printf("%d ", out[i]);
        }
        printf ("\n");
    }
    for (int i = this ; i < N; i++){
        if (flag[i]== 0){
            out[idx] = arr[i];
            flag[i] = 1;
            rec(N, idx+1, arr, flag, i + 1);
            flag[i] = 0;
        }
    }
}
int main()
{
    int N;
    int arr[13];
    while(1){
        scanf("%d", &N);
        if (N == 0)
            break;
        int flag[13] = {0,};
        for(int i = 0 ; i < N; i++){
            scanf("%d", &arr[i]);
        }
        rec(N, 0, arr, flag, 0);
        printf ("\n");
    }
    return 0;
}