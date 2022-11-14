#include <stdio.h>
#define max(x,y) x > y ? x : y

int main() {
	int T, n;
	int dp[2][100001];

	scanf("%d", &T);

	while (T-- > 0) {
		scanf("%d", &n);

		dp[0][0] = dp[1][0] = 0;

		for (int i = 0; i < 2; i++) {
			for (int j = 1; j <= n; j++)
				scanf("%d", &dp[i][j]);
		}

		for (int i = 2; i <= n; i++) {
			dp[0][i] += max(dp[1][i - 1], dp[1][i - 2]);
			dp[1][i] += max(dp[0][i - 1], dp[0][i - 2]);
		}

		printf("%d\n", max(dp[0][n], dp[1][n]));
	}
}