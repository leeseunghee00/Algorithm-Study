#include <stdio.h>
#define min(x,y) x<y?x:y

int main() {
	int n;

	scanf("%d", &n);

	int dp[n];

	dp[0] = dp[1] = 0;

	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;

		if (i % 3 == 0)
			dp[i] = min(dp[i / 3] + 1, dp[i]);
		if (i % 2 == 0)
			dp[i] = min(dp[i / 2] + 1, dp[i]);
	}

	printf("%d\n", dp[n]);
}
