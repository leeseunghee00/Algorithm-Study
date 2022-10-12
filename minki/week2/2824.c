#include <stdio.h>

int fac[1000][2] = {0,};
int cnt = 0;
//int fac[1000000000] = {0,};
unsigned long long int ret = 1;

void factor(int in){
    for (int i = 2; i <= in; i++) {
        while (in % i == 0) {
            while(fac[cnt][0] != i || fac[cnt][0] != 0){
                cnt++;
            }
            fac[cnt][0] = i;
            fac[cnt][1]++;
            in = in / i;
        }
    }
}

void cal(int in) {
    for (int i = 2; i <= in; i++) {
        while (in % i == 0) {
            for(int k = 0 ; k < cnt; k++){
                if (fac[k][0] == i && fac[k][1] != 0  ){
                     ret = ret * i;
                     fac[k][1]--;
                }
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