#include <stdio.h>

int n;
int arr[1000];
int check[1000];

void DFS(int depth) {
	if (depth == n) {
		for (int i = 0; i < n; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	else {
		for (int i = 0; i < n; i++) {
			if (!check[i]) {
				arr[depth] = i + 1;
				check[i] = 1;
				DFS(depth + 1);
				check[i] = 0;
			}
		}
	}
}

int main() {
	scanf("%d", &n);
	DFS(0);
	return 0;
}