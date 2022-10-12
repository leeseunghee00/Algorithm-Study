#include<stdio.h>
#define abs(x) (x < 0) ? -(x) : (x)

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int N, loc, temp, nbr, ans;
    scanf("%d %d", &N, &loc);
    for(int i = 0 ; i < N; i++){
        scanf("%d", &temp);
        if (i == 0){
            ans = abs(temp - loc);
        }
        else{
            nbr = abs(temp - loc);
            ans = gcd(ans, nbr);
        }
    }
    printf("%d", ans);
    return 0;
}