#include <stdio.h>

int prime[1000001];

void get_prime(int n) {
	for (int i = 2; i < 1000001; i++) {
		prime[i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 2 * i; j <= n; j += i) {
			prime[j] = 0;
		}
	}

	for (int i = n / 2; i > 0; i--) {
		if (prime[i] == 1 && prime[n - i] == 1) {
			printf("%d %d\n", i, n - i);
			break;
		}
	}
}


int main() {
	int T, n;

	scanf("%d", &T);

	while (T-- > 0) {
		scanf("%d", &n);
		get_prime(n);
	}
}