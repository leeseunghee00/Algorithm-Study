#include <stdio.h>
#define SIZE 1001

int main(void) {
	int n, max = 0;
	int dp[SIZE], arr[SIZE];

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= n; i++) {
		int min = 0;

		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				if (min < dp[j]) {
					min = dp[j];
				}
			}
		}

		dp[i] = min + 1;

		if (max < dp[i])
			max = dp[i];
	}
	
	printf("%d\n", max);
}