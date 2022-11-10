#include <stdio.h>
#include <math.h>

void hanoi(int n, int src, int via, int dst) {
	if (n == 1) {
		printf("%d %d\n", src, dst);
		return;
	}

	hanoi(n - 1, src, dst, via);
	hanoi(1, src, via, dst);
	hanoi(n - 1, via, src, dst);
}

int main() {
	int n;
	scanf("%d", &n);

	int count = pow(2, n) - 1;

	if (n <= 20) {
		printf("%d\n", count);
		hanoi(n, 1, 2, 3);
	}
}