#include <stdio.h>

int t, n;
int prime[1000001];

void get_prime() {
	for (int i = 2; i < 1000001; i++) {
		prime[i] = 1;
	}

	for (int i = 2; i <= 1000000; i++) {
		for (int j = 2; j <= 1000000 / i; j++)
			prime[i * j] = 0;
	}
}

int main() {
	scanf("%d", &t);
	get_prime();

	while (t-- > 0) {
		scanf("%d", &n);

		int cnt = 0;

		for (int i = 0; i <= n / 2; i++) {
			if (prime[i] == 1 && prime[n - i] == 1)
				cnt++;
		}

		printf("%d\n", cnt);
	}
}