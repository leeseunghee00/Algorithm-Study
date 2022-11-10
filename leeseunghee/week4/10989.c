#include <stdio.h>
#define SIZE 10001

int main() {
	int arr[SIZE] = { 0 };
	int n, m;

	scanf("%d", &n);
	while (n-- > 0) {
		scanf("%d", &m);
		arr[m - 1] += 1;
	}

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < arr[i]; j++) {
			printf("%d\n", i + 1);
		}
	}
}