#include <stdio.h>
#define SIZE 1001

int main(void) {
	int n, min = 0;
	int dp[SIZE], arr[SIZE];

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= n; i++) {
		int max = 0;

		for (int j = 1; j <= i; j++) {
			if (arr[i] < arr[j]) {
				if (max < dp[j]) {
					max = dp[j];
				}
			}
		}

		dp[i] = max + 1;

		if (min < dp[i])
			min = dp[i];
	}
	
	printf("%d\n", min);
}