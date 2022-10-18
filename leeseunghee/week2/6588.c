#include <stdio.h>

int prime[1000001];

void get_prime() {
	for (int i = 2; i <= 1000000; i++) {
		for (int j = 2; j <= 1000000 / i; j++) {
			prime[i * j] = 0;
		}
	}
}

void gold(int n) {
	int check = 0;

	for (int i = 2; i <= n; i++) {
		if (prime[i] && prime[n - i]) {
			printf("%d = %d + %d\n", n, i, n - i);
			check = 1;
			break;
		}
	}

	if (check == 0)
		printf("Goldbach's conjecture is wrong.\n");
}

int main() {
	int n;
	prime[1] = 1;

	get_prime();

	while (1) {
		scanf("%d", &n);
		if (n == 0)
			break;
		gold(n);
	}
}