#include <stdio.h>
#define SIZE 12

int main() {
	int T, n;
	long long dp[SIZE] = { 0,1,2,4 };

	scanf("%d", &T);

	for (int i = 4; i < SIZE; i++)
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

	while (T-- > 0) {
		scanf("%d", &n);
		printf("%d\n", dp[n]);
	}
}