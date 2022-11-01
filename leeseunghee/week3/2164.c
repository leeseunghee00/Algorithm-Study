#include <stdio.h>
#include <stdlib.h>

int N, * queue;

void Queue(int front, int rear) {
	front = (front + 1) % N;

	if (front == rear) {
		printf("%d\n", queue[rear]);
		return;
	}
	else {
		rear = (rear + 1) % N;
		queue[rear] = queue[front];
		front = (front + 1) % N;
	}

	Queue(front, rear);
}

int main() {
	scanf("%d", &N);

	int front = 0, rear = N - 1;

	queue = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) { queue[i] = i + 1; }

	Queue(front, rear);
}