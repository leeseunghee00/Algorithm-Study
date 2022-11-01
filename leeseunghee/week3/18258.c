#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node;

typedef struct Queue {
	Node* front;
	Node* rear;
	int count;
} Queue;

int empty(Queue* queue) {
	return queue->count == 0;
}

void push(Queue* queue, int data) {
	Node* newNode;

	newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if (empty(queue)) {
		queue->front = newNode;
	}
	else {
		queue->rear->next = newNode;
	}
	queue->rear = newNode;
	queue->count++;
}

void pop(Queue* queue) {
	Node* ptr;
	int data;

	if (empty(queue)) {
		printf("-1\n");
	}
	else {
		ptr = queue->front;
		data = ptr->data;

		printf("%d\n", data);

		queue->front = ptr->next;
		queue->count--;
	}
}

void size(Queue* queue) {
	printf("%d\n", queue->count);
}

void front(Queue* queue) {
	if (empty(queue)) {
		printf("-1\n");
	}
	else {
		printf("%d\n", queue->front->data);
	}
}

void back(Queue* queue) {
	if (empty(queue)) {
		printf("-1\n");
	}
	else {
		printf("%d\n", queue->rear->data);
	}
}
void initQueue(Queue* queue) {
	queue->front = queue->rear = NULL;
	queue->count = 0;
}

int main() {
	int N, data;
	char op[10];
	Queue queue;

	scanf("%d", &N);

	initQueue(&queue);

	while (N-- > 0) {
		scanf("%s", &op);

		if (!strcmp(op, "push")) {
			scanf(" %d", &data);
			push(&queue, data);
		}
		else if (!strcmp(op, "pop")) {
			pop(&queue);
		}
		else if (!strcmp(op, "size")) {
			size(&queue);
		}
		else if (!strcmp(op, "empty")) {
			printf("%d\n", empty(&queue));
		}
		else if (!strcmp(op, "front")) {
			front(&queue);
		}
		else if (!strcmp(op, "back")) {
			back(&queue);
		}
	}
}