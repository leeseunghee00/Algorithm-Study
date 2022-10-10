#include <stdio.h>

int m, n;
int arr[1000];
int check[1000];

void DFS(int start, int depth) {
	if (depth == n) {
		for (int i = 0; i < n; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	else {
		for (int i = start; i <= m; i++) {
			if (!check[i] && depth < i) {
				arr[depth] = i;
				check[i] = 1;
				DFS(i + 1, depth + 1);
				check[i] = 0;
			}
		}
	}
}

int main() {
	scanf("%d %d", &m, &n);
	DFS(0, 0);
	return 0;
}