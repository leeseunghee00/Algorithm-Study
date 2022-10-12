#include <stdio.h>

int cnt = 0;
int arr[20];


void rec(int N, int sum, int value, int idx){
    if (idx == N){
        if (sum == value){
            //printf("---idx : %d, value : %d---\n", idx, value);
            cnt++;
        }
    }
    else{
        //printf("sum : %d, idx : %d, value: %d, cnt : %d\n", sum, idx, value, cnt);
        rec(N, sum, value, idx + 1);
        rec(N, sum, value + arr[idx], idx+1);
    }
    //건너뛰는거 생각해야함!
}
int main()
{
    int N, sum;
    scanf("%d %d", &N, &sum);
    for (int i =0 ; i < N; i++){
        scanf("%d", &arr[i]);
    }
    rec(N, sum, 0, 0);
    if (sum == 0)
        cnt = cnt - 1;
    printf("%d", cnt);
}