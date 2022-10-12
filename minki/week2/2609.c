#include <stdio.h>

// 최대공약수 재귀 방식
int gcd(int a, int b) {
    if (b == 0)
        return a;

    // GCD(a, b) = GCD(b, r)이므로 (r = a % b)
    return gcd(b, a % b);
}
int main(){

    int a, b, d;
    scanf("%d %d" , &a, &b);
    d = gcd(a, b);	// 최대공약수

    printf("%d\n", d);
    printf("%d" , a * b / d);

}

