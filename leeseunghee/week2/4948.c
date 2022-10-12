#include <stdio.h>

int prime[1000001];

int get_prime(int n) {
	for (int i = 2; i < 1000001; i++) {
		prime[i] = 1;
	}

	for (int i = 2; i <= 2 * n; i++) {
		for (int j = 2 * i; j <= 2 * n; j += i) {
			prime[j] = 0;
		}
	}

	int cnt = 0;
	for (int i = n + 1; i <= 2 * n; i++) {
		if (prime[i] == 1)
			cnt++;
	}

	return cnt;
}

int main() {
	int n;

	while (1) {
		scanf("%d", &n);

		if (n == 0)
			break;

		printf("%d\n", get_prime(n));
	}
}