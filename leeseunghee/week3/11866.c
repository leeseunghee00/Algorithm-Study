#include <stdio.h>
#include <stdlib.h>

int n, m, * queue;

void Queue() {
	int idx = 0, cnt, front;

	printf("<%d", queue[m - 1]);
	queue[m - 1] = 0;

	for (int i = 0, idx = m; i < n - 1; i++) {
		cnt = 0; front = 0;

		while (cnt < m) {
			if (queue[(front + idx) % n] != 0)
				cnt++;
			front++;
		}
		front--;

		idx = (front + idx) % n;
		printf(", %d", queue[idx]);
		queue[idx] = 0;
	}
	printf(">\n");
}

int main() {
	scanf("%d %d", &n, &m);

	queue = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) { queue[i] = i + 1; }

	Queue();
}