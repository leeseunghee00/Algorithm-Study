#include<stdio.h>
#include <math.h>

int arr[100];
int ans[100];
int idx = 0;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void factor(int in){
    for (int i = 2; i <= sqrt(in); i++) {
        if (in % i == 0) {
            ans[idx++] = i;
            in = in / i;
        }
    }
}

int main()
{
    int N, nbr, rem, flag = 0;
    scanf("%d", &N);
    for(int i = 0 ; i < N; i++){
        scanf("%d", &arr[i]);
    }
    nbr = arr[1] - arr[0];
    for (int j = 0 ; j <= idx ; j++){
        if (arr[0] % ans[j] == arr[1] % ans[j]){
            rem = arr[0] % ans[j];
            for(int k =2 ; k < N; k++){
                if (arr[k] % ans[j] != rem)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                printf("%d ", ans[j]);
            flag = 0;
        }
    }
    return 0;
}