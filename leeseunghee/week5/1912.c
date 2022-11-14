#include <stdio.h>
#define max(x,y) x > y ? x : y

int main(){
	int n, result;

	scanf("%d", &n);

	int num[n], dp[n];

	for(int i=0; i<n; i++)
		scanf("%d", &num[i]);
	
	dp[0] = num[0];
	result = num[0];

	for(int i=1; i<n; i++){
		dp[i] = max(dp[i-1]+num[i], num[i]);
		result = max(dp[i], result);
	}

	printf("%d\n", result);
}