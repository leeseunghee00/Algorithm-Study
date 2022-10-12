#include <stdio.h>

int fac[1000000000] = {0,};
unsigned long long int ret = 1;

void factor(int in){
    for (int i = 2; i <= in; i++) {
        while (in % i == 0) {
            fac[i]++;
            in = in / i;
        }
    }
}

void cal(int in) {
    for (int i = 2; i <= in; i++) {
        while (in % i == 0) {
            if (fac[i] != 0) {
                ret = ret * i;
                fac[i]--;
            }
            in = in / i;
        }
    }
}

void out(){
    if (ret > 99999999){
        int arr[8] = {0,};
        for (int i = 7; i > -1 ; i--){
            arr[i] = ret % 10;
            ret = ret / 10;
        }
        for (int i = 0 ; i < 8; i ++){
            printf("%d", arr[i]);
        }
    }
    else
        printf("%d", (int)ret);
    return ;
}

int main()
{
    int N, M;
    int in;
    scanf("%d", &N);
    for (int i = 0; i< N; i++){
        scanf("%d", &in);
        factor(in);
    }
    scanf("%d", &M);
    for (int i = 0; i< M; i++){
        scanf("%d", &in);
        cal(in);
    }
    out();
    return 0;
}