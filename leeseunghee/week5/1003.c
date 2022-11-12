#include <stdio.h>
#define SIZE 41

int main() {
	int T, n;
	int dp[SIZE] = { 0,1 };

	scanf("%d", &T);

	for (int i = 2; i < SIZE; i++)
		dp[i] = dp[i - 1] + dp[i - 2];

	while (T-- > 0) {
		scanf("%d", &n);
		if (n == 0)
			printf("1 0\n");
		else
			printf("%d %d\n", dp[n - 1], dp[n]);
	}
}