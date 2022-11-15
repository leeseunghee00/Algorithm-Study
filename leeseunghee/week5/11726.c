#include <stdio.h>
#define SIZE 1001

int main() {
	int n;
	int dp[SIZE] = { 0,1,2 };

	scanf("%d", &n);

	for (int i = 3; i < SIZE; i++)
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;

	printf("%d\n", dp[n]);
}