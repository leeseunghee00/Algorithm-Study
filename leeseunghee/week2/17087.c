#include <stdio.h>

int get_gcd(int a, int b) {
	int gcd = a % b;

	if (gcd == 0)
		return b;

	get_gcd(b, gcd);
}

int main() {
	int n, s;
	scanf("%d %d", &n, &s);

	int distance, result = 0;

	while (n-- > 0) {
		int a;
		scanf("%d", &a);

		distance = (a > s) ? (a - s) : (s - a);

		if (result != 0)
			result = get_gcd(result, distance);
		else
			result = distance;
	}

	printf("%d\n", result);
}