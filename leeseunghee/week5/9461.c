#include <stdio.h>
#define SIZE 101

int main() {
	int T, n;
	long long dp[SIZE] = { 0, 1, 1, 1 };

	scanf("%d", &T);

	for (int i = 4; i < SIZE; i++)
		dp[i] = dp[i - 2] + dp[i - 3];

	while (T-- > 0) {
		scanf("%d", &n);
		printf("%lld\n", dp[n]);
	}
}