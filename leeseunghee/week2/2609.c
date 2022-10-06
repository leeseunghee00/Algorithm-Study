#include <stdio.h>

int get_gcd(int m, int n){
    int gcd = 0;
    int min = (m < n) ? m : n;

    for(int i=1; i<= min; i++){
        if (m%i==0 && n%i==0){
            gcd = i;
        }
    }

    return gcd;
}

int get_lcm(int m, int n){
    int lcm;
    int gcd = get_gcd(m, n);

	m = m/gcd;
	n = n/gcd;

	printf("m: %d n: %d\n", m, n);
	lcm = gcd * m * n;

    return lcm;
}

int main(){
    int m, n;

    scanf("%d %d", &m, &n);

    printf("%d\n", get_gcd(m, n));
    printf("%d\n", get_lcm(m, n));
}